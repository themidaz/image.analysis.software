#include "mw_kwithu_lib.h"
using namespace mw_kwithu_lib;


//implementation for the functions defined in "mw_kwithu_lib.h" 
mw_kwithu_lib::collection_of_improcessing_functions::collection_of_improcessing_functions()
{
}

//converts string to char. Due to the mixing of managed and unmanaged c++ code, this function is necessary if opencv is to be be able to access the filename
//of the image selected by the user
char * collection_of_improcessing_functions::ConvertString2Char(System::String^ str)
{	// Marshal method
		char* strs = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
		return strs;
	
}
	
//after processing and analysis haas been  done on a mat object, it has to be converted back to a bitmap so that the result can be displayed in the picturebox
System::Drawing::Bitmap^ collection_of_improcessing_functions::Mat2Bitmap(cv::Mat & colorImage)
{
	//System::Drawing::Graphics^ graphics = control->CreateGraphics();
	System::IntPtr ptr(colorImage.ptr());
	System::Drawing::Bitmap^ b;
	switch (colorImage.type())
	{
	case CV_8UC3: // non-grayscale images are correctly displayed here
		b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
			System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		break;
	case CV_8UC1: // grayscale images are incorrectly displayed here 
		b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
			System::Drawing::Imaging::PixelFormat::Format8bppIndexed, ptr);
		break;
	default:
		b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
			System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		break;
	}
	return b;
}


	//resizes the width and height of an image
 cv::Mat collection_of_improcessing_functions::ToResize(cv::Mat src) {	// Rezise image method
	cv::Mat dst;
	cv::resize(src, dst, cv::Size(400, 400), 0, 0, 1); // src image,destination and the dimensions of the image
	return dst;//return the image to the function that called it
}


  //sobel edge detection
cv::Mat collection_of_improcessing_functions::SobelEdgeDetector(cv::Mat inputMat)
{
	cv::Mat dest, dest1;
	Sobel(inputMat, dest, CV_64F, 2, 2);
	convertScaleAbs(dest, dest1);
	return dest1;
}
//Canny Edge Detector
cv::Mat collection_of_improcessing_functions::CannyEdgeDetector(cv::Mat inputMat, int threshold)
{
	cv::Mat dest, dest1, dest2; //create 3 mat objects
	cvtColor(inputMat, dest, CV_BGR2GRAY);//convert from rgb to graycale
	GaussianBlur(dest, dest, cv::Size(3,3), 2); //apply a gaussian blur to the mat
	double upper_threshold = 200;
	Canny(dest, dest1, (double)threshold, upper_threshold, 3, false);// lower and upper threshold are in the ratio 2:1 following canny's recommendations
	convertScaleAbs(dest1, dest2);//On each element of the input array, the function  performs three operations sequentially: scaling, taking an absolute value, conversion to an unsigned 8-bit type
	return dest2;//return the result ot the function that called it
}
//laplacian edge detector
cv::Mat collection_of_improcessing_functions::LaplacianEdgeDetector(cv::Mat inputMat)
{
	cv::Mat dest, dest1;
	Laplacian(inputMat, dest, CV_64F);
	convertScaleAbs(dest, dest1);
	return dest1;
}
//changing brightness
cv::Mat collection_of_improcessing_functions::change_brightness(int brightness_threshold, cv::Mat inputMat)
{
	cv::Mat dest;
	if (brightness_threshold > 0)
	{
		inputMat.convertTo(dest, -1, 1, brightness_threshold);  //increase brightness by 25 units    
		return dest;
	}
	else
	{
		inputMat.convertTo(dest, -1, 1, brightness_threshold);  //decrease brightness by 25 units
		return dest;
	}
	
}
//applying sepia effect
cv::Mat collection_of_improcessing_functions::apply_sepia_effect(cv::Mat inputMat)
{
	cv::Mat dest;

				/*the sepia kernel matrix*/
//Blue Value        0.272,		0.534,		 0.131           0 (Ignored)
//Green Value       0.349,	    0.686,		 0.168           0 (Ignored)
//Red Value         0.393,		0.769,		 0.189			 0 (Ignored)
//Alpha Value       0            0            0              1


/*what this means is that rgb components of each pixel in the image will be converted to the yiq color space and 
  the calculation is done as follows:
  new value for Red will be calculated as 0.393*R + 0.769*G + 0.189*B
  new value for Green will be calculated as 0.272*R + 0.534*G + 0.131*B
  new value for Blue will be calculated as  0.349*R + 0.686*G + 0.168*B

where RGB are the red green and blue values of a pixel, from the image on which we wish to apply this effect
//  Alpha channel should stay the same.*/

	cv::Mat kernel =		(cv::Mat_<float>(3, 3)<<			
			0.272, 0.534, 0.131,	//blue
			0.349, 0.686, 0.168,	//green
			0.393, 0.769, 0.189);	//red
					
	cv::transform(inputMat, dest, kernel);
	return dest;
}

//applying a gaussian blur to an image
cv::Mat collection_of_improcessing_functions::apply_blur(int blur_amount, cv::Mat inputMat)
{
	cv::Mat dest;
	int k = (blur_amount / 2) * 2 + 1; //the receiving funct GaussianBlur(...,cv::Size(k,k)...requires k to be an odd value
	GaussianBlur(inputMat, dest, cv::Size(k,k), 0, 0, cv::BORDER_DEFAULT);
	return dest;
}
//flipping an image vertically
cv::Mat collection_of_improcessing_functions::flip_image_vertically(cv::Mat inputMat)
{
	cv::Mat dest;
	flip(inputMat, dest, 0);//Flip(Mirror) Vertically
	return dest;
}
//flipping an image horizontally
cv::Mat collection_of_improcessing_functions::flip_image_horizontally(cv::Mat inputMat)
{
	cv::Mat dest;
	flip(inputMat, dest, +1);//Flip(Mirror) Horizontally
	return dest;
}
//rotate an image by 90degrees clockwise
cv::Mat collection_of_improcessing_functions::rotate_image_90_right(cv::Mat inputMat)
{
	cv::Mat dest,dest2;
	transpose(inputMat, dest);
	flip(dest, dest2, +1);
	return dest2;
}
//rotate an image by 90degrees counter clockwise
cv::Mat collection_of_improcessing_functions::rotate_image_90_left(cv::Mat inputMat)
{
	cv::Mat dest,dest2;
	transpose(inputMat, dest);
	flip(dest, dest2, 0);
	return dest2;

}

//harris corner detector
cv::Mat collection_of_improcessing_functions::harrisCornerDetector(int trackbarValue, cv::Mat inputMat)
{
	
	cv::Mat src = inputMat;
	cv::Mat  x2y2, xy, mtrace, src_gray, x_derivative, y_derivative, x2_derivative, y2_derivative,
		xy_derivative, x2g_derivative, y2g_derivative, xyg_derivative, dst, dst_norm, dst_norm_scaled;
	int thresh = trackbarValue;// 128;
	cv::cvtColor(src, src_gray, CV_BGR2GRAY);
	//first step is
	//to calculate x and y derivative of image we use Sobel function
	//Sobel( srcimage, dstimage, depthofimage -1 means same as input, xorder 1,yorder 0,kernelsize 3, BORDER_DEFAULT);
	cv::Sobel(src_gray, x_derivative, CV_32FC1, 1, 0, 3, cv::BORDER_DEFAULT);
	cv::Sobel(src_gray, y_derivative, CV_32FC1, 0, 1, 3, cv::BORDER_DEFAULT);
	//Step Two calculate other three images in M
	pow(x_derivative, 2.0, x2_derivative);
	pow(y_derivative, 2.0, y2_derivative);
	multiply(x_derivative, y_derivative, xy_derivative);
	//step three apply gaussain
	GaussianBlur(x2_derivative, x2g_derivative, cv::Size(7, 7), 2.0, 0.0, cv::BORDER_DEFAULT);
	GaussianBlur(y2_derivative, y2g_derivative, cv::Size(7, 7), 0.0, 2.0, cv::BORDER_DEFAULT);
	GaussianBlur(xy_derivative, xyg_derivative, cv::Size(7, 7), 2.0, 2.0, cv::BORDER_DEFAULT);
	//fourth step calculating R with k=0.04
	multiply(x2g_derivative, y2g_derivative, x2y2);
	multiply(xyg_derivative, xyg_derivative, xy);
	pow((x2g_derivative + y2g_derivative), 2.0, mtrace);
	dst = (x2y2 - xy) - 0.04 * mtrace;
	//normalizing result from 0 to 255 By normalizing the corner response (that are in some unknown interval) in the interval [0, 255] 
	//it's easier to select a threshold (since you now know the the threshold will also be in the interval [0, 255]) to keep only strongest
	//responses. The range [0,255] is useful when, such in this case, you get the threshold value through a slider, which can have only integer values
	normalize(dst, dst_norm, 0, 255, cv::NORM_MINMAX, CV_32FC1, cv::Mat());
	convertScaleAbs(dst_norm, dst_norm_scaled); //needed only to convert dst_norm to a Mat of type CV_8U, so it can be shown correctly by imshow
	// Drawing a circle around the points detected as corners
	for (int j = 0; j < src_gray.rows; j++)
	{
		for (int i = 0; i < src_gray.cols; i++)
		{
			if ((int)dst_norm.at<float>(j, i) > thresh)
			{
				circle(src_gray, cv::Point(i, j), 5, cv::Scalar(255), 2, 8, 0);
			}
		}
	}
	cv::imshow("harris corner detect", src_gray);
	return src_gray;
}

//change contrast 
cv::Mat collection_of_improcessing_functions::change_contrast(int contrast_threshold,cv::Mat inputMat)
{
	cv::Mat dest;
	
		inputMat.convertTo(dest, -1, contrast_threshold, 0);  //increase or decrease contrast  
		return dest;
	
}

//change saturation of an image
cv::Mat collection_of_improcessing_functions::change_saturation(int saturation_value,cv::Mat inputMat)
{
	hsv_saturation_processing(saturation_value, inputMat);//calls another function which takes care of the saturation
	return inputMat;
}

//change hue of an image
cv::Mat collection_of_improcessing_functions::change_hue(int hue_value,cv::Mat inputMat)
{
	
	hsv_hue_processing(hue_value,inputMat);
	return inputMat;
}

//changing value of an image
cv::Mat collection_of_improcessing_functions::change_hsvValue(int Value_value, cv::Mat inputMat)
{
	hsv_value_processing(Value_value, inputMat);
	return inputMat;
}

cv::Mat collection_of_improcessing_functions::gamma_correct(cv::Mat inputMat,const double gamma_)
{
	
	cv::Mat img_original, img_corrected, img_gamma_corrected;
	CV_Assert(gamma_ >= 0);
	//! [changing-contrast-brightness-gamma-correction]
	cv::Mat lookUpTable(1, 256, CV_8U);
	uchar* p = lookUpTable.ptr();
	for (int i = 0; i < 256; ++i)
		p[i] = cv::saturate_cast<uchar>(pow(i / 255.0, gamma_) * 255.0);

	cv::Mat res = inputMat.clone();
	LUT(inputMat, lookUpTable, res);
	//! [changing-contrast-brightness-gamma-correction]

	hconcat(inputMat, res, img_gamma_corrected);
	return img_gamma_corrected;
}

cv::Mat collection_of_improcessing_functions::apply_emboss_effect(cv::Mat inputMat)
{
	cv::Mat dest;
	GaussianBlur(inputMat, dest, cv::Size(7, 7), 1.5, 1.5);
	return dest;
}

//converting a rgb image to a grayscale image
cv::Mat collection_of_improcessing_functions::apply_greyscale_effect(cv::Mat inputMat)
{
	cv::Mat dest;
	cvtColor(inputMat, dest, CV_BGR2GRAY);//function  that performs the conversion. dest is the resulting greyscale image
	imshow("grayscale image", dest);
	return dest;
}


//removing gaussian noise from an image using non local means method.this one works on color images 
cv::Mat collection_of_improcessing_functions::fastNonlocalMeansDenoising_Color(cv::Mat src, float h, float hColor, int templateWindowSize, int searchWindowSize)
{
	cv::Mat dest;
	cv::fastNlMeansDenoisingColored(src, dest, h, hColor, templateWindowSize, searchWindowSize);
	return dest;
}

//removing gaussian noise from an image using non local means method.this one works on grayscale images
cv::Mat collection_of_improcessing_functions::fastNonlocalMeansDenoising_Grayscale(cv::Mat src, float h,int templateWindowSize, int searchWindowSize)
{
	cv::Mat dest;
	cv::fastNlMeansDenoising(src, dest, h, templateWindowSize, searchWindowSize);
	return dest;
}

//removing impulse noise using the median filter
cv::Mat collection_of_improcessing_functions::apply_median_filter(cv::Mat inputMat, int kernel_size)
{
	if (kernel_size % 2 == 0) //changing kernel_size to odd if it is even, an error will be produced in the function "medianBlur"
		kernel_size += 1;
	cv::Mat dest;
	cv::medianBlur(inputMat, dest, kernel_size);
	return dest;
}

/*-------------------------reduce periodic noise using notch filter---------------------*/
cv::Mat collection_of_improcessing_functions::reduce_periodic_noise(cv::Mat& inputMat)
{
	cv::Mat imgIn = inputMat;
	imgIn.convertTo(imgIn, CV_32F);

	cv::Rect roi = cv::Rect(0, 0, imgIn.cols & -2, imgIn.rows & -2);
	imgIn = imgIn(roi);
	cv::Mat imgPSD;
	calcPSD(imgIn, imgPSD);
	fftshift_(imgPSD, imgPSD);
	normalize(imgPSD, imgPSD, 0, 255, cv::NORM_MINMAX);
	

	cv::Mat H = cv::Mat(roi.size(), CV_32F, cv::Scalar(1));
	const int r = 21;
	synthesizeFilterH_(H, cv::Point(408, 420), r);
	synthesizeFilterH_(H, cv::Point(491, 360), r);
	synthesizeFilterH_(H, cv::Point(574, 299), r);
	cv::Mat imgHPlusPSD = imgPSD + H * 50;
	normalize(imgHPlusPSD, imgHPlusPSD, 0, 255, cv::NORM_MINMAX);
	imgHPlusPSD.convertTo(imgHPlusPSD, CV_8U);
	cv::Mat imgOut;
	fftshift_(H, H);
	filter2DFreq_(imgIn, imgOut, H);
	normalize(imgOut, imgOut, 0, 255, cv::NORM_MINMAX);
	
	return imgOut;  
	
}

//add gaussian noise to an image
cv::Mat collection_of_improcessing_functions::Add_gaussian_Noise(cv::Mat &source, double mean, double sigma)
{
	cv::Mat NoiseArray = source.clone();//clone the source mat
	cv::RNG rand_num_gen;
	rand_num_gen.fill(NoiseArray, cv::RNG::NORMAL, mean, sigma);  //generating gaussian white noise 
	 //randn(dstArr,mean,sigma); //achieves  the same effect, this time using the randn function
	add(source, NoiseArray, source);   //convolution of source and the NoiseArray, result is that source now has gaussian noise added to it
	return source;
}


//convert a rgb image to a black and white image
cv::Mat collection_of_improcessing_functions::convert_rgbimg2binaryimg(cv::Mat inputMat)
{
	cv::Mat greyMat;
	cv::cvtColor(inputMat, greyMat, CV_BGR2GRAY);//first convert it greyscale
	cv::threshold(greyMat , greyMat, 100, 255, CV_THRESH_BINARY);//then using thresholding,we will obtain an image composed of only black and white
	return greyMat;//return the result
}

//prewitt edge detection
cv::Mat collection_of_improcessing_functions::prewittEdgeDetector(cv::Mat & image, const unsigned char threshold)
{
	std::vector<int> xGradient = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };//matrix for calculating image derivates in the x direction
	std::vector<int> yGradient = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };//matrix for calculating image derivates in the y direction

	edgeDetection(image, xGradient, yGradient);

	image = image > threshold;
	return image;
}
//called by prewittEdgeDetector() function
void collection_of_improcessing_functions::edgeDetection(cv::Mat & image, std::vector<int> & xGradient, std::vector<int> & yGradient)
{
	cv::Mat tempImage;

	if (image.channels() != 1)//if image has multiple channels
	{
		cvtColor(image, tempImage, cv::COLOR_BGR2GRAY);//convert it to greyscale

		tempImage.copyTo(image);
	}
	else
	{
		image.copyTo(tempImage);
	}

	int kernelSize = sqrt(xGradient.size());

	std::vector <int> values;

	int halfSize{ kernelSize / 2 };

	for (int i{ halfSize }; i < tempImage.rows - halfSize; i++)
	{
		for (int j{ halfSize }; j < tempImage.cols - halfSize; j++)
		{
			values.clear();

			for (int x = { -halfSize }; x <= halfSize; x++)
			{
				for (int y = { -halfSize }; y <= halfSize; y++)
				{
					unsigned char * pixelValuePtr = tempImage.ptr(i + x) + (j + y);

					values.push_back(*pixelValuePtr);
				}
			}

			long gX = inner_product(begin(values), end(values), begin(xGradient), 0);

			long gY = inner_product(begin(values), end(values), begin(yGradient), 0);

			long newPixelValue = abs(gX) + abs(gY);

			unsigned char * pixelValuePtr = image.ptr(i) + j;

			*pixelValuePtr = newPixelValue > 255 ? 255 : newPixelValue < 0 ? 0 : newPixelValue;
		}
	}
}

//called by change_hue function
void collection_of_improcessing_functions::hsv_hue_processing(int hue_shift,cv::Mat inputMat)
{
	
	cv::Mat hsv;
	cvtColor(inputMat, hsv, CV_BGR2HSV);//convert image from rgb color space to hsv colorspace, so that the h,s,v elements can be modified independently of each other

//	const unsigned char hue_shift = 20;

	for (int j = 0; j < inputMat.rows; j++)
	{
		for (int i = 0; i < inputMat.cols; i++)
		{
			// Get hue. 
	   // Saturation is hsv.at<Vec3b>(j, i)[1], and 
	   // Value is hsv.at<Vec3b>(j, i)[2].
			signed short hue = hsv.at<cv::Vec3b>(j, i)[0];
			signed short hue_plus_shift = hue;
			hue_plus_shift += hue_shift;

			if (hue_plus_shift < 0)
				hue = 180 + hue_plus_shift;
			else if (hue_plus_shift > 180)
				hue = hue_plus_shift - 180;
			else
				hue = hue_plus_shift;

			hsv.at<cv::Vec3b>(j, i)[0] = static_cast<unsigned char>(hue);
		}
	}
	cvtColor(hsv, inputMat, CV_HSV2BGR);
}
// called by change_saturation function
void collection_of_improcessing_functions::hsv_saturation_processing(int saturation_shift, cv::Mat inputMat)
{

	cv::Mat hsv;
	cvtColor(inputMat, hsv, CV_BGR2HSV);	//convert image from rgb color space to hsv colorspace, so that the h,s,v elements can be modified independently of each other
	for (int j = 0; j < inputMat.rows; j++)
	{
		for (int i = 0; i < inputMat.cols; i++)
		{
			// Get saturation. 
	   // Saturation is hsv.at<Vec3b>(j, i)[1], and 
	   // Value is hsv.at<Vec3b>(j, i)[2].
			signed short saturation = hsv.at<cv::Vec3b>(j, i)[1];
			signed short saturation_plus_shift = saturation;
			saturation_plus_shift += saturation_shift;

			//dealing with negative saturation values
			if (saturation_plus_shift < 0)
				saturation = 180 + saturation_plus_shift;
			else if (saturation_plus_shift > 180)
				saturation = saturation_plus_shift - 180;
			else
				saturation = saturation_plus_shift;

			hsv.at<cv::Vec3b>(j, i)[1] = static_cast<unsigned char>(saturation);
		}
	}
	cvtColor(hsv, inputMat, CV_HSV2BGR);
}

//called by change_hsvvalue function
void collection_of_improcessing_functions::hsv_value_processing(int value_shift, cv::Mat inputMat)
{

	cv::Mat hsv;
	cvtColor(inputMat, hsv, CV_BGR2HSV);//convert image from rgb color space to hsv colorspace, so that the h,s,v elements can be modified independently of each other

	//	const unsigned char hue_shift = 20;

	for (int j = 0; j < inputMat.rows; j++)
	{
		for (int i = 0; i < inputMat.cols; i++)
		{
			// Get hue. 
	   // Saturation is hsv.at<Vec3b>(j, i)[1], and 
	   // Value is hsv.at<Vec3b>(j, i)[2].
			signed short value = hsv.at<cv::Vec3b>(j, i)[2];
			signed short value_plus_shift = value;
			value_plus_shift += value_shift;

			if (value_plus_shift < 0)
				value = 180 + value_plus_shift;
			else if (value_plus_shift > 180)
				value = value_plus_shift - 180;
			else
				value = value_plus_shift;

			hsv.at<cv::Vec3b>(j, i)[2] = static_cast<unsigned char>(value);
		}
	}
	cvtColor(hsv, inputMat, CV_HSV2BGR);
}

//sharpening an image using unsharp masking
cv::Mat collection_of_improcessing_functions::sharpen_image(int kernel_size, int sigma, cv::Mat inputMat)
{
	int k_size = (kernel_size / 2) * 2 + 1; //the receiving funct GaussianBlur(...,cv::Size(k,k)...requires k to be an odd value
	cv::Mat originalImage,blurredImage;
	originalImage = inputMat;
	cv::Mat newImage = cv::Mat::zeros(originalImage.size(), originalImage.type());
	cv::GaussianBlur(originalImage, newImage, cv::Size(k_size, k_size),
		(double)sigma, //sigmaX, 
		(double)sigma, //sigmaY
		cv::BORDER_DEFAULT);

	double alpha = 2.5;
	double beta = 1.0 - alpha;
	cv::addWeighted(originalImage, alpha, newImage, beta, 0.0, newImage);//adds edge image(obtained by original image-gaussian blur of image) to the original image to give a sharper image

	blurredImage = newImage;
	return blurredImage;
}

//deblurring an image with wiener filter
cv::Mat collection_of_improcessing_functions::wiener_filter( cv::Mat inputMat)
{
	
	cv::Mat rrr = inputMat;
	cv::Mat1b src = inputMat;
	cv::Mat1b dst3x3, dst5x5, dst5x5_fixedNoise;

	double estimatedNoiseVariance;

	// Call to WienerFilter function with a 3x3 kernel and estimated noise variances
	estimatedNoiseVariance = WienerFilter(src, dst3x3, cv::Size(3, 3));

	// Call to WienerFilter function with default 5x5 kernel estimated noise variances
	estimatedNoiseVariance = WienerFilter(src, dst5x5, cv::Size(5, 5));

	// Call to WienerFilter function with a default 5x5 kernel and fixed noise variances
	WienerFilter(src, dst5x5_fixedNoise, 5000, cv::Size(5, 5));
	imshow("bb", dst5x5);
	return  rrr; // dst5x5_fixedNoise;
	
}
double collection_of_improcessing_functions::WienerFilter(const cv::Mat& src, cv::Mat& dst, const cv::Size& block) {
	return WienerFilterImpl(src, dst, -1, block);
}
void collection_of_improcessing_functions::WienerFilter(const cv::Mat& src, cv::Mat& dst, double noiseVariance, const cv::Size& block) {
	WienerFilterImpl(src, dst, noiseVariance, block);
	return;
}
double collection_of_improcessing_functions::WienerFilterImpl(const cv::Mat& src, cv::Mat& dst, double noiseVariance, const cv::Size& block) {

	assert(("Invalid block dimensions", block.width % 2 == 1 && block.height % 2 == 1 && block.width > 1 && block.height > 1));
	assert(("src and dst must be one channel grayscale images", src.channels() == 1, dst.channels() == 1));

	int h = src.rows;
	int w = src.cols;

	dst = cv::Mat1b(h, w);

	cv::Mat1d means, sqrMeans, variances;
	cv::Mat1d avgVarianceMat;

	boxFilter(src, means, CV_64F, block, cv::Point(-1, -1), true, cv::BORDER_REPLICATE);
	sqrBoxFilter(src, sqrMeans, CV_64F, block, cv::Point(-1, -1), true, cv::BORDER_REPLICATE);

	cv::Mat1d means2 = means.mul(means);
	variances = sqrMeans - (means.mul(means));

	if (noiseVariance < 0) {
		// I have to estimate the noiseVariance
		reduce(variances, avgVarianceMat, 1, CV_REDUCE_SUM, -1);
		reduce(avgVarianceMat, avgVarianceMat, 0, CV_REDUCE_SUM, -1);
		noiseVariance = avgVarianceMat(0, 0) / (h*w);
	}

	for (int r = 0; r < h; ++r) {
		// get row pointers
		uchar const * const srcRow = src.ptr<uchar>(r);
		uchar * const dstRow = dst.ptr<uchar>(r);
		double * const varRow = variances.ptr<double>(r);
		double * const meanRow = means.ptr<double>(r);
		for (int c = 0; c < w; ++c) {
			dstRow[c] = cv::saturate_cast<uchar>(
				meanRow[c] + cv::max(0., varRow[c] - noiseVariance) / cv::max(varRow[c], noiseVariance) * (srcRow[c] - meanRow[c])
				);
		}
	}

	return noiseVariance;
}



template<typename T> cv::Mat_<T> collection_of_improcessing_functions::transLocate(cv::Mat_<T>& image)
	{
		auto cols = image.cols / 2;
		auto rows = image.rows / 2;
		for (auto i = 0; i < rows; ++i)
			for (auto j = 0; j < cols; ++j)
			{
				//first swap
				T temp = image[i][j];
				image[i][j] = image[i + rows][j + cols];
				image[i + rows][j + cols] = temp;
				//second swap
				temp = image[i][j + cols];
				image[i][j + cols] = image[i + rows][j];
				image[i + rows][j] = temp;
			}
		return image;
	}



cv::Mat collection_of_improcessing_functions::GetImage(cv::Mat image)
	{
		cv::Mat src = image;
		cv::Mat gray;
		cv::cvtColor(src, gray, CV_BGR2GRAY);
		cv::Mat padded;                            //expand input image to optimal size
		int m = cv::getOptimalDFTSize(gray.rows);
		int n = cv::getOptimalDFTSize(gray.cols); // on the border add zero values
		copyMakeBorder(gray, padded, 0, m - gray.rows, 0, n - gray.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0));
		cv::Mat finalImage;
		padded.convertTo(finalImage, CV_64F);

		
			/*cv::Mat shoImg2;
			normalize(finalImage, shoImg2, 0, 1, CV_MINMAX);
			imshow("original", shoImg2);*/
		
		return finalImage;
	}


	cv::Mat collection_of_improcessing_functions::CreateImage(cv::Mat inimage)
	{
		cv::Mat_<double> inputImage = GetImage(inimage);
		inputImage = transLocate(inputImage);
		cv::Mat fourierTransform;
		//cv::Mat_<double> fourierTransform;
		cv::dft(inputImage, fourierTransform, cv::DFT_SCALE | cv::DFT_COMPLEX_OUTPUT);

		auto const rows = inputImage.rows;
		auto const cols = inputImage.cols;
		auto image  = GaussianConvolve(cv::Mat_<float>(fourierTransform), rows, cols);
		//auto image = GaussianConvolve(fourierTransform, rows, cols);
		cv::Mat transformed;


		cv::dft(image, transformed, cv::DFT_INVERSE | cv::DFT_REAL_OUTPUT);
		cv::Mat_<float> retVal(transformed);
		cv::Mat noise(inputImage.size(), CV_32F);
		randn(noise, 0.0, 1.0);
		cv::Mat img = transLocate(retVal);
		return img + noise;
	}



	template<typename T> cv::Mat_<T> collection_of_improcessing_functions::GaussianConvolve(cv::Mat_<T> image, unsigned int const rows, unsigned int const cols)
	{
		double const a = 1000.0;
		double const rootPi = sqrt(M_PI / a);
		double const expfactor = M_PI * M_PI / a;

		for (auto r = 0u; r < rows / 2; ++r)
			for (auto c = 0u; c < cols / 2; ++c)
			{
				auto x = 0.1*r;
				auto y = 0.1*c;
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				image[r][c] *= v;
			}
		for (auto r = rows / 2; r < rows; ++r)
			for (auto c = 0u; c < cols / 2; ++c)
			{
				auto x = 0.1*(r - rows / 2 + 1);
				auto y = 0.1*c;
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				image[r][c] *= v;
			}
		for (auto r = 0u; r < rows / 2; ++r)
			for (auto c = cols / 2; c < cols; ++c)
			{
				auto x = 0.1*r;
				auto y = 0.1*(c - cols / 2 + 1);
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				image[r][c] *= v;
			}
		for (auto r = rows / 2; r < rows; ++r)
			for (auto c = cols / 2; c < cols; ++c)
			{
				auto x = 0.1*(r - rows / 2 + 1);
				auto y = 0.1*(c - cols / 2 + 1);
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				image[r][c] *= v;
			}
		return image;
	}


	template<typename T> cv::Mat_<T> collection_of_improcessing_functions::GaussianDeconvolve(cv::Mat_<T> image, unsigned int const rows, unsigned int const cols)
	{
		double const a = 1000.0;
		double const rootPi = sqrt(M_PI / a);
		double const expfactor = M_PI * M_PI / a;
		double const b = 1.0;

		for (auto r = 0u; r < rows / 2; ++r)
			for (auto c = 0u; c < cols / 2; ++c)
			{
				auto x = 0.1*r;
				auto y = 0.1*c;
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				v = v / (v*v + b);
				image[r][c] *= v;
			}
		for (auto r = rows / 2; r < rows; ++r)
			for (auto c = 0u; c < cols / 2; ++c)
			{
				auto x = 0.1*(r - rows / 2 + 1);
				auto y = 0.1*c;
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				v = v / (v*v + b);
				image[r][c] *= v;
			}
		for (auto r = 0u; r < rows / 2; ++r)
			for (auto c = cols / 2; c < cols; ++c)
			{
				auto x = 0.1*r;
				auto y = 0.1*(c - cols / 2 + 1);
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				v = v / (v*v + b);
				image[r][c] *= v;
			}
		for (auto r = rows / 2; r < rows; ++r)
			for (auto c = cols / 2; c < cols; ++c)
			{
				auto x = 0.1*(r - rows / 2 + 1);
				auto y = 0.1*(c - cols / 2 + 1);
				double v = rootPi * exp(-expfactor * (x*x + y * y));
				v = v / (v*v + b);
				image[r][c] *= v;
			}
		return image;
	}


/*---------------------------------------------------------*/

	//applying cartoon effect
cv::Mat collection_of_improcessing_functions::apply_cartoon_effect(const cv::Mat inputMat)
{
		cv::Mat img = inputMat;
		cv::Mat gray, edges, color, cartoon;
		//1st apply a bilateral filter,to reduce color palette of the image simultaneously preserve edges
		cv::bilateralFilter(img, color, 9, 300, 300);
		//2nd convert to graycale and remove noise with median blur
		cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);
		cv::medianBlur(gray, gray, 3);
		//apply adaptive thresholding to obtain edge mask
		cv::adaptiveThreshold(gray, edges, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C , cv::THRESH_BINARY, 9, 3); 
		//# 3) Combine the images from step 1 with the image from step 3
		cv::bitwise_and(color, color, cartoon, edges);
		return cartoon;    
}

//apply negative effect on image
cv::Mat collection_of_improcessing_functions::apply_negative_effect(cv::Mat inputMat)
{
	//cv::Mat img_gray, img_gray_inv;
	//cv::cvtColor(inputMat, img_gray, cv::COLOR_BGR2GRAY);
		//A negative of the image can be obtained by "inverting" the grayscale value of every pixel.Since by default grayscale values are 
		//represented as integers in the range[0, 255](i.e., precision CV_8U), the "inverse" of a grayscale value x is simply 255 - x :
		

	bitwise_not(inputMat, inputMat);
	return inputMat;
}

//pixelate an image
cv::Mat collection_of_improcessing_functions::apply_pixelate_effect(cv::Mat inputMat)
{
	int pixel_block_size = 10;//size of block of pixels
	cv::Rect roi(0,0,inputMat.rows,inputMat.cols);//1st & 2nd define start point, 3rd & 4th determine the area within which effect is applied
	cv::Mat dst;
	dst.create(inputMat.rows, inputMat.cols, inputMat.type());

	cv::Rect rect;
	//loop through the image and apply pixelation
	for (int r = 0; r < inputMat.rows; r += pixel_block_size)
	{
		for (int c = 0; c < inputMat.cols; c += pixel_block_size)
		{
			rect.x = c;
			rect.y = r;
			rect.width = c + pixel_block_size < inputMat.cols ? pixel_block_size : inputMat.cols - c;
			rect.height = r + pixel_block_size < inputMat.rows ? pixel_block_size : inputMat.rows - r;

			// verify if the pixel is within the region of interest
			if (roi.contains(cv::Point(c, r)) && roi.contains(cv::Point(c + rect.width, r + rect.height))) {
				cv::Scalar color = mean(cv::Mat(inputMat, rect));
				rectangle(dst, rect, color, CV_FILLED);
			}
			else {
				
				cv::Mat(inputMat, rect).copyTo(cv::Mat(dst, rect));
			}
		}
	}
	return dst;
}

//apply spinning effect
cv::Mat collection_of_improcessing_functions::apply_spinning_effect(cv::Mat inputMat)
{
	cv::Mat Img = inputMat;

	cv::Mat Img_out(Img.size(), CV_8UC3);
	Img.copyTo(Img_out);

	int width = Img.cols;
	int height = Img.rows;
	float pi = 3.1415926;
	float angle = pi / 3;
	float centreX = 0.5;
	float centreY = 0.5;
	float radius = 0;

	if (radius == 0) radius = std::min(width, height) / 2;

	float icentreX = width * centreX;
	float icentreY = height * centreY;
	float radius2 = radius * radius;

	float dx, dy, new_x, new_y;
	float p, q, x1, y1;
	float distance, distance2;
	float a;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{

			dx = x - icentreX;
			dy = y - icentreY;

			distance2 = dx * dx + dy * dy;

			if (distance2 > radius2)
			{
				new_x = x;
				new_y = y;
			}
			else
			{
				distance = sqrt(distance2);
				a = std::atan2(dy, dx) + angle * (radius - distance) / radius;
				new_x = icentreX + distance * cos(a);
				new_y = icentreY + distance * sin(a);
			}

			if (new_x < 0)         new_x = 0;
			if (new_x >= width - 1)  new_x = width - 2;
			if (new_y < 0)         new_y = 0;
			if (new_y >= height - 1) new_y = height - 2;

			x1 = (int)new_x;
			y1 = (int)new_y;

			p = new_x - x1;
			q = new_y - y1;

			for (int k = 0; k < 3; k++)
			{
				Img_out.at<cv::Vec3b>(y, x)[k] = (1 - p)*(1 - q)*Img.at<cv::Vec3b>(y1, x1)[k] +
					(p)*(1 - q)*Img.at<cv::Vec3b>(y1, x1 + 1)[k] +
					(1 - p)*(q)*Img.at<cv::Vec3b>(y1 + 1, x1)[k] +
					(p)*(q)*Img.at<cv::Vec3b>(y1 + 1, x1 + 1)[k];
			}

		}
	}

	return Img_out;
}

//apply erosion to an image
cv::Mat collection_of_improcessing_functions::apply_erode_effect(cv::Mat inputMat)
{
	cv::Mat dest;
	erode(inputMat, dest, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5)));//  erode image with 5x5 kernel

	return dest;
}

//dilate an image
cv::Mat collection_of_improcessing_functions::apply_dilate_effect(cv::Mat inputMat)
{
	cv::Mat dest;
	dilate(inputMat, dest, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3)));//  dilate image with 3x3 kernel

	return dest;
}

//apply pencil sketch effect
cv::Mat collection_of_improcessing_functions::apply_pencil_sketch_effect(cv::Mat inputMat)
{
	/*This function produces an output that looks like a pencil sketch. There are two outputs, one is the result of applying the filter
	to the color input image, and the other is the result of applying it to the grayscale version of the input image. */
	cv::Mat dest_gray,dest_color;
	pencilSketch(inputMat, dest_gray, dest_color,  60,  0.07f,  0.02f);
	cv::imshow("im_gray",dest_gray);
	return dest_gray;
}

//apply stylized effect to image
cv::Mat collection_of_improcessing_functions::apply_stylized_effect(cv::Mat inputMat)
{
	/*The stylization function produces a output that looks like the image was painted using water color paint.*/
	cv::Mat dest;
	stylization(inputMat, dest,  60, 0.45f);
	return dest;
}

//apply edge preserving filter. 
cv::Mat collection_of_improcessing_functions::apply_edgePreserving_filter(cv::Mat inputMat)
{
	cv::Mat dest;
	edgePreservingFilter(inputMat, dest,  2,  20, 0.4f);
	return dest;
}
//opencv inbuilt image sharpening function
cv::Mat collection_of_improcessing_functions::apply_detailEnhancer_effect(cv::Mat inputMat)
{
	/*the filter enhances the details in an image thereby making the image look sharper.*/
	cv::Mat dest;
	detailEnhance(inputMat, dest, 10,  0.15f);
	return dest;
}

//method below is called by apply_kaleidoscope_effect() method
float collection_of_improcessing_functions::Triangle(float x)
{
	float temp_r = fmod(x, 1.0);

	if (temp_r < 0.5)
	{
		return 2 * temp_r;
	}
	else
	{
		return 2 * (1 - temp_r);
	}

}
/////////////////apply kaleidoscope effect//////////////////

cv::Mat collection_of_improcessing_functions::apply_kaleidoscope_effect(cv::Mat inputMat)
{
	cv::Mat Img=inputMat;
	cv::Mat Img_out(Img.size(), CV_8UC3);

	int width = Img.cols;
	int height = Img.rows;
	float pi = 3.1415926;
	float angle = pi / 4;
	float angle2 = pi / 4;
	float centreX = 0.5;
	float centreY = 0.5;
	float sides = 30;//10

	float icentreX = width * centreX;
	float icentreY = height * centreY;
	float radius = 150;

	float dx, dy, new_x, new_y;
	float p, q, x1, y1;
	float c, r, theta, temp_theta, radius_c;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{

			dx = x - icentreX;
			dy = y - icentreY;

			theta = atan2(dy, dx) - angle - angle2;
			r = sqrt(dy*dy + dx * dx);

			temp_theta = theta / pi * sides*0.5;
			theta = Triangle(temp_theta);

			if (radius)
			{
				c = cos(theta);
				radius_c = radius / c;
				r = radius_c * Triangle(r / radius_c);
			}


			theta = theta + angle;

			new_x = r * cos(theta) + icentreX;
			new_y = r * sin(theta) + icentreY;

			if (new_x < 0)         new_x = 0;
			if (new_x >= width - 1)  new_x = width - 2;
			if (new_y < 0)         new_y = 0;
			if (new_y >= height - 1) new_y = height - 2;

		

			x1 = (int)new_x;
			y1 = (int)new_y;

			p = new_x - x1;
			q = new_y - y1;

			for (int k = 0; k < 3; k++)
			{
				Img_out.at<cv::Vec3b>(y, x)[k] = (1 - p)*(1 - q)*Img.at<cv::Vec3b>(y1, x1)[k] +
					(p)*(1 - q)*Img.at<cv::Vec3b>(y1, x1 + 1)[k] +
					(1 - p)*(q)*Img.at<cv::Vec3b>(y1 + 1, x1)[k] +
					(p)*(q)*Img.at<cv::Vec3b>(y1 + 1, x1 + 1)[k];
			}

		}
	}

	return Img_out;
}

//apply pinch effect
cv::Mat collection_of_improcessing_functions::apply_pinch_effect(cv::Mat inputMat)
{
	cv::Mat Img = inputMat;
	cv::Mat Img_out(Img.size(), CV_8UC3);
	Img.copyTo(Img_out);

	int width = Img.cols;
	int height = Img.rows;
	float pi =3.1415926;
	float angle = pi / 2;
	float centreX = 0.5;
	float centreY = 0.5;
	float radius = 200;
	float amount = 0.5;

	if (radius == 0) radius = std::min(width, height) / 2;

	float icentreX = width * centreX;
	float icentreY = height * centreY;
	float radius2 = radius * radius;

	float dx, dy, new_x, new_y;
	float p, q, x1, y1;
	float distance;
	float a, d, t, s, c, e;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{

			dx = x - icentreX;
			dy = y - icentreY;

			distance = dx * dx + dy * dy;

			if (distance > radius2 || distance == 0)
			{
				new_x = x;
				new_y = y;
			}
			else
			{
				d = sqrt(distance / radius2);
				t = pow(sin(pi*0.5 * d), -amount);

				dx = dx * t;
				dy = dy * t;

				e = 1 - d;
				a = angle * e * e;

				s = sin(a);
				c = cos(a);

				new_x = icentreX + c * dx - s * dy;
				new_y = icentreY + s * dx + c * dy;
			}

			if (new_x < 0)         new_x = 0;
			if (new_x >= width - 1)  new_x = width - 2;
			if (new_y < 0)         new_y = 0;
			if (new_y >= height - 1) new_y = height - 2;

			x1 = (int)new_x;
			y1 = (int)new_y;

			p = new_x - x1;
			q = new_y - y1;

			for (int k = 0; k < 3; k++)
			{
				Img_out.at<cv::Vec3b>(y, x)[k] = (1 - p)*(1 - q)*Img.at<cv::Vec3b>(y1, x1)[k] +
					(p)*(1 - q)*Img.at<cv::Vec3b>(y1, x1 + 1)[k] +
					(1 - p)*(q)*Img.at<cv::Vec3b>(y1 + 1, x1)[k] +
					(p)*(q)*Img.at<cv::Vec3b>(y1 + 1, x1 + 1)[k];
			}

		}
	}

	return Img_out;
}
//lucy richardson deconvolution
cv::Mat collection_of_improcessing_functions::deblurring_by_deconvolution(cv::Mat inputMat)
{
	
	cv::Mat img, result;

	// read image
	img = inputMat; 

	// convert to double
	img.convertTo(img, CV_64F);

	// sigmaG: sigma of point spread function
	double sigmaG = 6.0;
	int winSize = 8 * sigmaG + 1 ;

	// Blur the original image
	GaussianBlur( img, img, cv::Size(winSize,winSize), sigmaG, sigmaG ); //blurring original image

	normalize(img, img, 0, 1, cv::NORM_MINMAX);

	//imshow( "Original", img ); 

	// num_iterations: number of iterations
	int num_of_iterations = 50; 

	// apply Lucy-Richardson Deconvolution
	lucy_richardson_deconvolution(img, num_of_iterations, sigmaG, result);

	normalize(result, result, 0, 1, cv::NORM_MINMAX);

	// Result
	return result; 
}

void collection_of_improcessing_functions::lucy_richardson_deconvolution(cv::Mat inputimg, int num_of_iterations, double sigmaG, cv::Mat& result)
{
	// Lucy-Richardson Deconvolution Function
	// input-1 img: NxM matrix image
	// input-2 num_iterations: number of iterations
	// input-3 sigma: sigma of point spread function (PSF)
	// output result: deconvolution result

	// Window size of PSF
	cv::Mat img = inputimg;
	int winSize = 8 * sigmaG + 1;
	double EPSILON = 2.2204e-16;
	// Initializations
	cv::Mat Y = img.clone();
	cv::Mat J1 = img.clone();
	cv::Mat J2 = img.clone();
	cv::Mat wI = img.clone();
	cv::Mat imR = img.clone();
	cv::Mat reBlurred = img.clone();

	cv::Mat T1, T2, tmpMat1, tmpMat2;
	T1 = cv::Mat(img.rows, img.cols, CV_64F, 0.0);
	T2 = cv::Mat(img.rows, img.cols, CV_64F, 0.0);

	// Lucy-Rich. Deconvolution CORE

	double lambda = 0;
	for (int j = 0; j < num_of_iterations; j++)
	{
		if (j > 1) {
			// calculation of lambda
			multiply(T1, T2, tmpMat1);
			multiply(T2, T2, tmpMat2);
			lambda = sum(tmpMat1)[0] / (sum(tmpMat2)[0] + EPSILON);
			// calculation of lambda
		}

		Y = J1 + lambda * (J1 - J2);
		Y.setTo(0, Y < 0);

		// 1)
		GaussianBlur(Y, reBlurred, cv::Size(winSize, winSize), sigmaG, sigmaG);//applying Gaussian filter 
		reBlurred.setTo(EPSILON, reBlurred <= 0);

		// 2)
		divide(wI, reBlurred, imR);
		imR = imR + EPSILON;

		// 3)
		GaussianBlur(imR, imR, cv::Size(winSize, winSize), sigmaG, sigmaG);//applying Gaussian filter 

		// 4)
		J2 = J1.clone();
		multiply(Y, imR, J1);

		T2 = T1.clone();
		T1 = J1 - Y;
	}

	// output
	result = J1.clone();
}

//stochastic deconvolution
const double reg_weight = 0.0005;   // regularizer weight
const double sigma = 8.0;      // mutation standard deviation
const double reset_prob = 0.005f;   // russian roulette chain reset probability
const int    num_iterations = 150;      // number of 'iterations', mostly for output
double ed = 0.025;     // starting deposition energy
const int    psf_cnt = 9;
const double psf_v[] = { 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0, 1.0 / 9.0 };
const int    psf_x[] = { -1,  0,  1, -1, 0, 1, -1, 0, 1 };
const int    psf_y[] = { -1, -1, -1,  0, 0, 0,  1, 1, 1 };
const int    reg_cnt = 3;
const int    reg_x[] = { 0,  1,  0 };
const int    reg_y[] = { 0,  0,  1 };
double collection_of_improcessing_functions::drand48()
{
	return (double)rand() / (double)RAND_MAX;
}

double collection_of_improcessing_functions::stochastic_devonvolution(sd_data *data, sd_callbacks *cb, double ed, int n_mutations)
{
	double fx, fy, a_rate = 0.0f;
	sd_sample sample_x, sample_y;
	// initialize the first sample randomly within the image
	sample_x.x = drand48()*(data->input.cols);
	sample_x.y = drand48()*(data->input.rows);
	sample_x.ed = ed;
	// evaluate the first sample
	fx = cb->evaluate(data, &sample_x);
	// loop until it's time to stop
	for (int i = 0; i < n_mutations; i++)
	{
		// generate a mutation and evaluate the objective function
		cb->mutate(data, &sample_x, &sample_y);
		fy = cb->evaluate(data, &sample_y);
		// if the mutation helps, apply it
		if (fy > 0.0)
		{
			a_rate += 1.0f;
			cb->splat(data, &sample_y, 1.0);
		}
		// if x worsens the objective, and y worsens it by less, then
		// accept y. otherwise use the standard MH acceptance criteria.
		// Doesn't handle mixed-signs of fx and fy properly, but it doesn't
		// seem to harm the algorithm
		if ((fx <= 0.0 && fy >= fx) || (drand48() < std::min(1.0, fy / fx)))
		{
			cb->copy(data, &sample_y, &sample_x);
			fy = cb->evaluate(data, &sample_x);
			fx = fy;
		}
	}
	// return the fraction of accepted samples in order to schedule
	// decreases to ed
	return a_rate / double(n_mutations);
}
cv::Mat collection_of_improcessing_functions::blur_image(cv::Mat &img)
{
	int tx, ty;
	cv::Mat blurred = cv::Mat::zeros(img.size(), CV_64FC1);

	for (int i = 0; i < img.cols; i++)
	{
		for (int j = 0; j < img.rows; j++)
		{
			for (int k = 0; k < psf_cnt; k++)
			{
				tx = i + psf_x[k];
				ty = j + psf_y[k];
				if (tx >= 0 && ty >= 0 && tx < img.cols && ty < img.rows)
				{
					blurred.at<double>(ty, tx) += psf_v[k] * img.at<double>(j, i);
				}
			}
		}
	}

	//Mat k=Mat::eye(9,9,CV_64FC1)/9.0;
	//cv::filter2D(img,blurred,-1,k);

	return blurred;
}

///////////////////////////////////////////////////////////////////////////////
// Stochastic Deconvolution Callbacks /////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

// takes a sample and splats its energy into the intrinsic image at the
// sample location, also splats the psf*sample_energy into the blurred
// intrinsic image to allow evaluating the change in data-term energy
void collection_of_improcessing_functions::splat(sd_data *data, sd_sample *x, double weight)
{
	int tx, ty;
	data->intrinsic.at<double>(x->y, x->x) += weight * x->ed;
	for (int i = 0; i < psf_cnt; i++)
	{
		tx = x->x + psf_x[i];
		ty = x->y + psf_y[i];
		if (tx > 0 && tx < data->blurred.cols && ty > 0 && ty < data->blurred.rows)
		{
			data->blurred.at<double>(ty, tx) += weight * x->ed*psf_v[i];
		}
	}
}

// copies sample x into sample y
void collection_of_improcessing_functions::copy(sd_data *data, sd_sample *x, sd_sample *y)
{
	y->x = x->x;
	y->y = x->y;
	y->ed = x->ed;
}

// evaluates the change in the objective function due to applying the sample
// x with either positive or negative weighting. Simply checks the change in
// data+regularizer energy after splatting the sample with positive and
// negative weights
double collection_of_improcessing_functions::evaluate(sd_data *data, sd_sample *x)
{
	double init = 0.0, plus = 0.0, minus = 0.0;
	double de_plus, de_minus;
	// start by computing the initial energy
	init = data_energy(data, x->x, x->y);
	for (int i = 0; i < reg_cnt; i++)
	{
		init += regularizer_energy(data, x->x + reg_x[i], x->y + reg_y[i]);
	}
	// splat the sample and evaluate the change
	// to the data fitting and regularizer energy
	splat(data, x, 1.0);
	plus = data_energy(data, x->x, x->y);
	for (int i = 0; i < reg_cnt; i++)
	{
		plus += regularizer_energy(data, x->x + reg_x[i], x->y + reg_y[i]);
	}
	splat(data, x, -2.0);  // remove twice the energy to get negative sample effect
	// compute the negative value
	minus = data_energy(data, x->x, x->y);
	for (int i = 0; i < reg_cnt; i++)
	{
		minus += regularizer_energy(data, x->x + reg_x[i], x->y + reg_y[i]);
	}
	splat(data, x, 1.0); // splat back the sample energy to remove all splatting effects
	// evalute the change in energy
	de_plus = init - plus;
	de_minus = init - minus;
	// if the negative energy provides the best
	// improvement, negate ed and return the energy
	// change
	if (de_minus > de_plus)
	{
		x->ed = -x->ed;
		return de_minus;
	}
	// return the positive energy change
	return de_plus;
}

// mutates sample x by either i) offseting the current sample by a
// normally distributed offset or ii) completely reseting the chain.
// (ii) is done by Russian Roulette.
void collection_of_improcessing_functions::mutate(sd_data *data, sd_sample *x, sd_sample *y)
{
	double dx, dy;
	y->ed = x->ed;
	if (drand48() >= reset_prob)
	{
		// normally distributed offset, keep sampling until a
		// new sample point is found that is not coincident with
		// the current point
		while (true)
		{
			sample_normal(dx, dy);
			y->x = int(double(x->x) + sigma * dx + 0.5);
			y->y = int(double(x->y) + sigma * dy + 0.5);
			if ((y->x != x->x || y->y != x->y) && inside_image(data, y->x, y->y))
			{
				break;
			}
		}
	}
	else
	{
		// reset the chain entirely
		y->x = drand48()*data->intrinsic.cols;
		y->y = drand48()*data->intrinsic.rows;
	}
}

// Computes the energy of the data term for a pixel at [x,y]. Given a matrix
// A representing convolution by the transpose of the PSF, the data term is:
//
// || A p - q ||_2^2
//
// where p is the intrinsic image and q is the measured (or for this demo,
// synthetic) blurry input image.  Stochastic deconvolution maintains a
// stored image b = A p (i.e. the current estimate of the intrinsic image
// blurred by the PSF, called data->blurred in the code below).  A change
// at [x,y] can only influence pixels in the support of the PSF, so only
// a small portion of the data term needs to be evaluated to see the effect
// of splatting a small change at [x,y]
double collection_of_improcessing_functions::data_energy(sd_data *data, int x, int y)
{
	int tx, ty;
	double delta, sum = 0.0;
	for (int i = 0; i < psf_cnt; i++)
	{
		tx = x + psf_x[i];
		ty = y + psf_y[i];
		if (inside_image(data, tx, ty))
		{
			delta = data->blurred.at<double>(ty, tx) - data->input.at<double>(ty, tx);
			sum += delta * delta;
		}
	}
	return sum;
}

// evaluates the regularizer function at [x,y]. It is VITAL that the
// pixels accessed by the regularizer function are included in the
// regularizer stencil at the top of this file, see the discussion
// there for details.
//
// this regularizer is simply isotropic TV
double collection_of_improcessing_functions::regularizer_energy(sd_data *data, int x, int y)
{
	double dx = 0.0, dy = 0.0;
	if (x > 0 && x < data->intrinsic.cols && y>0 && y < data->intrinsic.rows)
	{
		dx = data->intrinsic.at<double>(y, x) - data->intrinsic.at<double>(y, x - 1);
		dy = data->intrinsic.at<double>(y, x) - data->intrinsic.at<double>(y - 1, x);
	}
	return reg_weight * sqrt(dx*dx + dy * dy);
}

// draws two samples from a Gaussian (normal) distribution using
// a logarithmic transform. Note that it is important that the
// Gaussian is not truncated or ergodicity of the method
// disappears.
void collection_of_improcessing_functions::sample_normal(double &X, double &Y)
{
	double u = drand48(), v = drand48();
	double lnu = sqrt(-2.0*log(u));
	X = lnu * cos(2.0*CV_PI*v);
	Y = lnu * sin(2.0*CV_PI*v);
}

// returns true if the [x,y] is inside the image
bool collection_of_improcessing_functions::inside_image(sd_data *data, int x, int y)
{
	return x >= 0 && x < data->blurred.cols && y >= 0 && y < data->blurred.rows;
}

cv::Mat collection_of_improcessing_functions::stochasticcc_deconvolution(cv::Mat inputMat)
{

	cv::Mat input = inputMat;
	input.convertTo(input, CV_64FC1, 1.0 / 255.0);
	cv::Mat blurred = blur_image(input);
	cv::Mat solution = blurred.clone();

	// initialize the data structure for the stochastic_deconvolution routine
	sd_data data;
	data.input = blurred;
	data.intrinsic = solution;
	data.blurred = blur_image(solution);
	// create the callback structure
	//mw_kwithu_lib::collection_of_improcessing_functions::sd_callbacks cb;
	sd_callbacks cb;
	//funct_coll
	// cb.copy= copy;
	//cb.evaluate;// = evaluate;
	//cb.mutate;// = mutate;
	//cb.splat;// = splat;
	// actually perform the deconvolution, look for 100 iterations, applying
	// width*height mutations.  check the acceptance rate and if it drops below
	// 10%, scale the deposition energy down by a factor and continue
	double accept_rate = 0.0;
	for (int k = 0; k < num_iterations; k++)
	{
		accept_rate = stochastic_devonvolution(&data, &cb, ed, input.rows*input.cols);
		//std::cout << "iteration " << k + 1 << " of " << num_iterations << ", acceptance rate: " << accept_rate << ", ed: " << ed << std::endl;
		if (accept_rate < 0.4)
		{
			ed *= 0.5f;
		}
		cv::Mat tmp;
		data.intrinsic.convertTo(tmp, CV_8UC1, 255.0);
		imshow("I", tmp);
		return tmp;
		//cv::waitKey(10);
	}
	// write out the grayscale ground-truth image, the synthetically
	// blurred image and the deconvolved intrinsic image
	//imwrite("ground_truth.png", input*255.0);
	//imwrite("blurred.png", data.input*255.0);
	//imwrite("intrinsic.png", data.intrinsic*255.0);

	//cv::destroyAllWindows();
	// done!
	//return 0;
}
