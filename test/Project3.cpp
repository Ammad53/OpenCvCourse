#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////// Project 3 – License Plate Detector //////////////////////

int main() {

Mat img;
VideoCapture cap(0);

CascadeClassifier plateCascade;
    
    plateCascade.load("Users/ammadjamil/C++/test/test/Resources/haarcascade_russian_plate_number.xml");

    //if (plateCascade.empty()) { cout << "XML file not loaded" << endl; }

    vector<Rect> plates;

    while (true) {

    cap.read(img);
    plateCascade.detectMultiScale(img, plates, 1.1, 10);

    for (int i = 0; i < plates.size(); i++)
    {
    //Mat imgCrop = img(plates[i]);
    //imshow(to_string(i), imgCrop);
    //imwrite(" " + to_string(i) + "", imgCrop);
    rectangle(img, plates[i].tl(), plates[i].br(), Scalar(255, 0, 255), 3);
    }

        imshow("Image", img);
    waitKey(1);
    }
    return 0;
    }
   /////////////////  Project3  //////////////////////
/*
   int main() {
       printf("Ammad here");
       string path = "/Users/ammadjamil/C++/test/test/Resources/test.png";
       Mat img = imread(path);
       
       CascadeClassifier faceCascade;
       faceCascade.load("/Users/ammadjamil/C++/test/test/Resources/haarcascade_frontalface_default.xml");

       if (faceCascade.empty()) { cout <<"XML file not loaded" << endl;}

       vector<Rect> faces;
       faceCascade.detectMultiScale(img, faces, 1.1, 10);

       for (int i = 0; i < faces.size(); i++)
       {
       rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
       }


       
       imshow("Image", img);
       waitKey(0);
       return 0;
 
   }

*/
