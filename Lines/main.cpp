#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using  namespace std;
using namespace cv;
main(){

    Mat image(1000,1000,CV_8UC3);
    namedWindow("",CV_WINDOW_AUTOSIZE);
    line(image,Point(50,100),Point(800,100),Scalar(255,0,0),10,CV_AA);
    line(image,Point(50,200),Point(800,200),Scalar(0,255,0),2,4);
    line(image,Point(50,300),Point(800,300),Scalar(0,0,255),1,8);
    imshow("",image);
    waitKey(0);

}
