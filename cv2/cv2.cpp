
#include <opencv2\opencv.hpp>
using namespace cv;
int main()
{
	cv::Mat srcMat = imread("D:\\360downloads\\1.jpg",0);   //一定要加后缀！！！！！！！！！！！

	imshow("D:\\360downloads\\1.jpg", 0);
	waitKey(0);
	return 0;
}