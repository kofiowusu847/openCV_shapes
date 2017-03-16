#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using  namespace std;
using namespace cv;

int main()
{
    Mat image(1000,1000,CV_8UC3);

        int font[] = {  FONT_HERSHEY_SIMPLEX,FONT_HERSHEY_PLAIN,
                        FONT_HERSHEY_DUPLEX,FONT_HERSHEY_COMPLEX,
                        FONT_HERSHEY_TRIPLEX, FONT_HERSHEY_COMPLEX_SMALL,
                        FONT_HERSHEY_SCRIPT_SIMPLEX,FONT_HERSHEY_SCRIPT_COMPLEX,
                        FONT_ITALIC
                        };
                                        /*font[0],1.2 font-size*/
    putText(image,"Gideon",Point(100,100),FONT_HERSHEY_SIMPLEX,1.2,Scalar(0,0,255),3,CV_AA);
    putText(image,"Gideon",Point(100,200),FONT_HERSHEY_PLAIN,4,Scalar(0,255,0),1,CV_AA);
    putText(image,"Gideon",Point(100,300),font[2],3,Scalar(255,0,0),3,8);
    putText(image,"Gideon",Point(100,400),font[3],4,Scalar(255,0,0),3,8);
    putText(image,"Gideon",Point(100,500),font[6],3,Scalar(255,0,0),3,8);
    imshow("Welcome",image);
    waitKey(0);
    return 0;
}
