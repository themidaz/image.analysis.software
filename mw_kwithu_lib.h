#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp> 
#include <opencv2/photo.hpp>
#include"opencv2/opencv.hpp"
#include <numeric>//for std::inner_product funct
#define _USE_MATH_DEFINES
#include <math.h>
using namespace System::Runtime::InteropServices; 



namespace mw_kwithu_lib
{
	
	
	//contains defintions for functions that process images and do other things in  the program 
	class collection_of_improcessing_functions
	{
	
	public:
		collection_of_improcessing_functions();
		char* ConvertString2Char(System::String^ str);
		System::Drawing::Bitmap^ Mat2Bitmap(cv::Mat & colorImage);
		cv::Mat ToResize(cv::Mat src);
		void highlight_Button(System::Windows::Forms::Control^ control, System::EventArgs^  e);
		void revert_buttonColors(System::Windows::Forms::Control^ control, System::EventArgs^  e);
		cv::Mat SobelEdgeDetector(cv::Mat inputMat);
		cv::Mat CannyEdgeDetector(cv::Mat inputMat, int threshold);
		cv::Mat LaplacianEdgeDetector(cv::Mat inputMat);
		cv::Mat histogramBalancing(cv::Mat inputMat);
		cv::Mat apply_sepia_effect(cv::Mat inputMat);
		cv::Mat convert_rgbimg2binaryimg(cv::Mat inputMat);
		cv::Mat apply_gaussian_blur(cv::Mat inputMat);
		cv::Mat change_brightness(int brightness_threshold ,cv::Mat inputMat);
		cv::Mat apply_blur(int blur_amount, cv::Mat inputMat);
		cv::Mat gamma_correct(cv::Mat inputMat, const double gamma_);
		cv::Mat change_contrast(int contrast_threshold,cv::Mat inputMat);
		cv::Mat flip_image_vertically(cv::Mat inputMat);
		cv::Mat flip_image_horizontally(cv::Mat inputMat);
		cv::Mat rotate_image_90_right(cv::Mat inputMat);
		cv::Mat rotate_image_90_left(cv::Mat inputMat);
		cv::Mat harrisCornerDetector(int trackbarValue, cv::Mat inputMat);
		cv::Mat change_saturation(int saturation_value,cv::Mat inputMat);
		cv::Mat change_hue(int hue_value,cv::Mat inputMat);
		cv::Mat change_hsvValue(int Value_value, cv::Mat inputMat);
		cv::Mat sharpen_image(int kernel_size, int sigma,cv::Mat inputMat);
		
		cv::Mat apply_emboss_effect(cv::Mat inputMat);
		cv::Mat apply_greyscale_effect(cv::Mat inputMat);
		cv::Mat apply_diffuse_effect(cv::Mat inputMat);
		cv::Mat fastNonlocalMeansDenoising_Color(cv::Mat src, float h, float hColor, int templateWindowSize, int searchWindowSize );
		cv::Mat fastNonlocalMeansDenoising_Grayscale(cv::Mat src, float h, int templateWindowSize, int searchWindowSize);
		cv::Mat apply_median_filter(cv::Mat inputMat, int kernel_size);
		cv::Mat reduce_periodic_noise(cv::Mat& inputMat);
		/*functions below are called by reduce_periodic_noise() when reducing periodic noise from an img using notch reject filter*/

		void fftshift_(const cv::Mat& inputImg, cv::Mat& outputImg);
		void filter2DFreq_(const cv::Mat& inputImg, cv::Mat& outputImg, const cv::Mat& H);
		void synthesizeFilterH(cv::Mat& inputOutput_H, cv::Rect roi);
		void synthesizeFilterH_(cv::Mat& inputOutput_H, cv::Point center, int radius);
		void calcPSD(const cv::Mat& inputImg, cv::Mat& outputImg, int flag = 0);
		/*--------------------------------------------------------------------*/
		cv::Mat Add_gaussian_Noise(cv::Mat &srcArr, double mean, double sigma);
		cv::Mat Add_salt_and_pepper_Noise(cv::Mat &srcArr, float pa, float pb);
		cv::Mat prewittEdgeDetector(cv::Mat & image, const unsigned char threshold);
		void edgeDetection(cv::Mat & image, std::vector<int>& xKernel, std::vector<int>  & yKernel);
		void hsv_hue_processing(int saturation_shift,cv::Mat inputMat);
		void hsv_saturation_processing(int hue_shift, cv::Mat inputMat);
		void hsv_value_processing(int value_shift, cv::Mat inputMat);
		cv::Mat wiener_filter( cv::Mat inputMat);
		/*helper ffunctions called by wiener_filter()*/
		template<typename T> cv::Mat_<T> transLocate(cv::Mat_<T>& image);// templated class ,since it receives different data types
		template<typename T> cv::Mat_<T> GaussianDeconvolve(cv::Mat_<T> image, unsigned int const rows, unsigned int const cols);
		template<typename T> cv::Mat_<T> GaussianConvolve(cv::Mat_<T> image, unsigned int const rows, unsigned int const cols);
		cv::Mat CreateImage(cv::Mat image);
		cv::Mat GetImage(cv::Mat image);
		



		/*-------------------------------------------------------*/
		double WienerFilter(const cv::Mat& src, cv::Mat& dst, const cv::Size& block);
		void WienerFilter(const cv::Mat& src, cv::Mat& dst, double noiseVariance, const cv::Size& block);
		double WienerFilterImpl(const cv::Mat& src, cv::Mat& dst, double noiseVariance, const cv::Size& block);
		/*end */
		cv::Mat  apply_cartoon_effect(cv::Mat inputMat);
		cv::Mat histogram_equalization(cv::Mat inputMat);
		cv::Mat apply_negative_effect(cv::Mat inputMat);
		cv::Mat apply_pixelate_effect(cv::Mat inputMat);
		cv::Mat color_temp_mild(cv::Mat inputMat);
		cv::Mat apply_spinning_effect(cv::Mat inputMat);
		cv::Mat apply_erode_effect(cv::Mat inputMat);
		cv::Mat apply_dilate_effect(cv::Mat inputMat);
		cv::Mat apply_pencil_sketch_effect(cv::Mat inputMat);
		cv::Mat apply_stylized_effect(cv::Mat inputMat);
		cv::Mat apply_edgePreserving_filter(cv::Mat inputMat);
		cv::Mat apply_detailEnhancer_effect(cv::Mat inputMat);
		float Triangle(float x); //called by apply_kaleidoscope_effect() method
		cv::Mat apply_kaleidoscope_effect(cv::Mat inputMat);
		cv::Mat apply_pinch_effect(cv::Mat inputMat);
		cv::Mat deblurring_by_deconvolution(cv::Mat inputMat);
		void lucy_richardson_deconvolution(cv::Mat inputimg, int num_of_iterations, double sigmaG, cv::Mat& result);//called by deblurring_by_deconvolution
		cv::Mat stochasticcc_deconvolution(cv::Mat inputMat);
		cv::Mat blur_image(cv::Mat &img);
		typedef struct
		{
			int     x;
			int     y;
			double  ed;
		} sd_sample;
		typedef struct
		{
			cv::Mat     input;
			cv::Mat     blurred;
			cv::Mat     intrinsic;
		} sd_data;
		// structure of callback functions
		typedef struct
		{
			// Evaluates the change in energy due to a sample x being splatted with
			// either positive or negative weight. Returns the best energy change
			// and sets the sign of x->ed to match
			double(*evaluate)(sd_data *data, sd_sample *x);

			// generates a new sample y from an existing sample x by a mutation.
			// should be ergodic, i.e. all points in domain sampled with finite
			// probability at all times.
			void(*mutate)(sd_data *data, sd_sample *x, sd_sample *y);

			// splats a sample into the intrinsic image and blurred-intrinsic
			// image to 'record' a sample that has improved the objective function
			void(*splat)(sd_data *data, sd_sample *x, double weight);

			// copies sample x into sample y
			void(*copy)(sd_data *data, sd_sample *x, sd_sample *y);
		} sd_callbacks;
		void splat(sd_data *data, sd_sample *x, double weight);
		void copy(sd_data *data, sd_sample *x, sd_sample *y);
		double evaluate(sd_data *data, sd_sample *x);
		void mutate(sd_data *data, sd_sample *x, sd_sample *y);
		double data_energy(sd_data *data, int x, int y);
		double regularizer_energy(sd_data *data, int x, int y);
		//void sample_normal(double &X, double &Y);
		bool inside_image(sd_data *data, int x, int y);
		double drand48();
		
		double stochastic_devonvolution(sd_data *data, sd_callbacks *cb, double ed, int n_mutations);
		
		// callbacks used by the sampling routine
//		void splat(sd_data *data, sd_sample *x, double weight);
//		void copy(sd_data *data, sd_sample *x, sd_sample *y);
//		double evaluate(sd_data *data, sd_sample *x);
//		void mutate(sd_data *data, sd_sample *x, sd_sample *y);
//	    cv::Mat blur_image(cv::Mat& img);

		void sample_normal(double &X, double &Y);
//		bool inside_image(sd_data *data, int x, int y);
//		double data_energy(sd_data *data, int x, int y);
//		double regularizer_energy(sd_data *data, int x, int y);

	};
}

