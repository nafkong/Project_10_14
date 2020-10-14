//¿ÎÌÃÊµÀý
//#include <iostream>
//#include <opencv2/opencv.hpp>
//
//using namespace cv;
//using namespace std;
//
//int main()
//{
//	VideoCapture cap(0);
//	double scale = 0.5;
//
//	double i_minH = 0;
//	double i_maxH = 20;
//
//	double i_minS = 43;
//	double i_maxS = 255;
//
//	double i_minV = 55;
//	double i_maxV = 255;
//
//	while (1)
//	{
//		Mat frame;
//		Mat hsvMat;
//		Mat detectMat;
//
//		cap >> frame;
//		Size ResImgSiz = Size(frame.cols * scale, frame.rows * scale);
//		Mat rFrame = Mat(ResImgSiz, frame.type());
//		resize(frame, rFrame,ResImgSiz,INTER_LINEAR);
//
//		cvtColor(rFrame,hsvMat,COLOR_BGR2HSV);
//
//		rFrame.copyTo(detectMat);
//
//		cv::inRange(hsvMat,Scalar(i_minH,i_minS, i_minV),Scalar(i_maxH,i_maxS,i_maxV),detectMat);
//
//		imshow("whie: in the range", detectMat);
//		imshow("frame",rFrame);
//
//		waitKey(30);
//
//	}
//}
//

//´øTrackbar°æ±¾
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int i_minH = 0;
int i_maxH = 20;

int i_minS = 43;
int i_maxS = 255;

int i_minV = 55;
int i_maxV = 255;

Mat frame;
Mat hsvMat;
Mat detectMat;

void Trackbar_i_minH(int, void*)
{
	cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
	imshow("whie: in the range", detectMat);
}
void Trackbar_i_maxH(int, void*)
{
	cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
	imshow("whie: in the range", detectMat);
}
void Trackbar_i_minS(int, void*)
{
	cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
	imshow("whie: in the range", detectMat);
}
void Trackbar_i_maxS(int, void*)
{
	cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
	imshow("whie: in the range", detectMat);
}
void Trackbar_i_minV(int, void*)
{
	cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
	imshow("whie: in the range", detectMat);
}
void Trackbar_i_maxV(int, void*)
{
	cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
	imshow("whie: in the range", detectMat);
}


int main()
{
	VideoCapture cap(0);
	double scale = 1;


	while (1)
	{
		cap >> frame;
		Size ResImgSiz = Size(frame.cols * scale, frame.rows * scale);
		Mat rFrame = Mat(ResImgSiz, frame.type());
		resize(frame, rFrame, ResImgSiz, INTER_LINEAR);

		cvtColor(rFrame, hsvMat, COLOR_BGR2HSV);

		rFrame.copyTo(detectMat);

		cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);
		imshow("whie: in the range", detectMat);

		createTrackbar("i_minH", "whie: in the range", &i_minH, 255, Trackbar_i_minH);
		createTrackbar("i_maxH", "whie: in the range", &i_maxH, 255, Trackbar_i_maxH);
		createTrackbar("i_minS", "whie: in the range", &i_minS, 255, Trackbar_i_minS);
		createTrackbar("i_maxS", "whie: in the range", &i_maxS, 255, Trackbar_i_maxS);
		createTrackbar("i_minV", "whie: in the range", &i_minV, 255, Trackbar_i_minV);
		createTrackbar("i_maxV", "whie: in the range", &i_maxV, 255, Trackbar_i_maxV);
		imshow("frame", rFrame);

		waitKey(30);

	}
}


