//¿ÎÌÃÊµÀý
//#include <iostream>
//#include <opencv2/opencv.hpp>
//
//using namespace cv;
//using namespace std;
//
//string window_name = "binaryMat";
//
//void threshold_Mat(int th, void* data)
//{
//	Mat src = *(Mat*)(data);
//
//	Mat dst;
//
//	threshold(src, dst, th, 255, 0);
//
//	imshow(window_name, dst);
//}
//
//int main()
//{
//	Mat srcMat, gryMat;
//	int lowTh = 30, maxTh = 255;
//
//	srcMat = imread("C:/Users/admin/Desktop/messi.jpg");
//	if (!srcMat.data)
//	{
//		cout << "Í¼ÏñÔØÈëÊ§°Ü" << endl;
//		return 0;
//
//	}
//	cvtColor(srcMat, gryMat, CV_BGR2GRAY);
//	imshow(window_name, gryMat);
//	createTrackbar("threshold",
//					window_name,
//					&lowTh, maxTh, 
//					threshold_Mat, 
//					&gryMat);
//	waitKey(0);
//
//	return 0;
//}

//·½·¨¶þ
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

string window_name = "binaryMat";

Mat srcMat, gryMat, dstMat;
int lowTh = 30, maxTh = 255;

void threshold_Mat(int, void*)
{
	threshold(gryMat, dstMat, lowTh, 255, 0);
	imshow(window_name, dstMat);
}

int main()
{
	srcMat = imread("C:/Users/admin/Desktop/messi.jpg");
	if (!srcMat.data)
	{
		cout << "Í¼ÏñÔØÈëÊ§°Ü" << endl;
		return 0;

	}
	cvtColor(srcMat, gryMat, CV_BGR2GRAY);
	imshow(window_name, gryMat);

	createTrackbar("threshold",
					window_name,
					&lowTh, maxTh,
					threshold_Mat);
	waitKey(0);

	return 0;
}