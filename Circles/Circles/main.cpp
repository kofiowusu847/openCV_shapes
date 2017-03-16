#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using  namespace std;
using namespace cv;

int main()
{
    Mat image(1000,2000,CV_8UC3);
    /*   Point(x,y) Location on window ,
         30 is the diameter
         Scalar(red,green,blue) is the color,
         3 the thickness
         CV_AA(auxilary) is the line type or edge type*/
        circle(image,Point(100,100),30,Scalar(0,0,255),3,CV_AA);
        circle(image,Point(100,200),25,Scalar(0,255,0),1,CV_AA);
        circle(image,Point(100,300),50,Scalar(255,0,0),3,8);

            /*Circle with a colour fill  -1 gives a full colour fil */
        circle(image,Point(300,100),80,Scalar(0,0,255),-1,CV_AA);
        circle(image,Point(300,250),25,Scalar(0,255,0),-1,CV_AA);
        circle(image,Point(300,300),10,Scalar(255,0,0),-1,8);
        imshow("Welcome",image);
        waitKey(0);
        return 0;
}
