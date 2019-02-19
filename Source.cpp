
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include<conio.h>


using namespace cv;
using namespace std;

int main()
{
	
	Mat img1 = imread("image.jpg");
	if (img1.empty())
   {
		cout << "Cannot load image!" << endl;
		return -1;
	}
	Mat img2 = imread("image1.jpg");
	if (img2.empty())
	{
		cout << "Cannot load image!" << endl;
		return -1;
	}
	cvtColor(img1, img1, CV_BGR2GRAY);
	imshow("FirstImage", img1);  // Original image1

	cvtColor(img2, img2, CV_BGR2GRAY);
	imshow("SecondImage", img2);  // Original image2

	Mat elp1(img1.rows, img1.cols, CV_8UC1, Scalar(0, 0, 0));
	ellipse(elp1, Point(90, 125), Size(50.0, 60.0), 0, 0, 360, Scalar(255, 255, 255), -1, 8);
	//imshow("ellipse1", elp1);  

	Mat elp2(img2.rows, img2.cols, CV_8UC1, Scalar(0, 0, 0));
	ellipse(elp2, Point(90, 125), Size(50.0, 60.0), 0, 0, 360, Scalar(255, 255, 255), -1, 8);
	//imshow("ellipse2", elp2); 

	Mat face1;
	bitwise_and(img1, elp1, face1);
	imshow("Facce1", face1);  //face image
	cv::Mat Nfc1;
	cv::subtract(img1, face1, Nfc1);
	imshow("NoFace1", Nfc1); //Noface image


	Mat face2;
	bitwise_and(img2, elp2, face2);
	imshow("Face2", face2);  // face image
	cv::Mat Nfc2;
	cv::subtract(img2, face2, Nfc2);
	imshow("NoFace2", Nfc2); //Noface image

	


	Size size(300, 300);
	Mat out1, out2; //output images
	Mat resize1,resize3;
	Mat resize2, resize4;
	
	cv::resize(Nfc2, resize1, size); //resize image
	cv::resize(Nfc1, resize3, size); //resize image
	cv::resize(face1, resize2, size); //resize image
	cv::resize(face2, resize4, size); //resize image

	cv::add(resize1, resize2, out1);
	cv::add(resize3, resize4, out2);

	imshow("output", out1);
	imshow("reverse", out2);

    waitKey(0);
	return 0;
}





