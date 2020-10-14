#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() 
{
	Mat image = imread("C:/Users/admin/Desktop/messi.jpg",0);
	Mat image1;
	//threshold(image, image1, 100, 255, THRESH_BINARY);
	adaptiveThreshold(image, image1, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	imshow("image",image);
	imshow("image1", image1);
	waitKey(0);

}