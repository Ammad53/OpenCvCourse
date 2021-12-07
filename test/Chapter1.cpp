#include <opencv2/imgcodecs.hpp>
   #include <opencv2/highgui.hpp>
   #include <opencv2/imgproc.hpp>
   #include <iostream>
 
   using namespace cv;
   using namespace std;
/*
int main() {

    string path = "/Users/ammadjamil/C++/test/test/Resources/shapes.png";
Mat img = imread(path);
Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

cvtColor(img, imgGray, COLOR_BGR2GRAY);
GaussianBlur(imgGray, imgBlur, Size(7, 7), 5, 0);
Canny(imgBlur, imgCanny, 25,75);

Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
dilate(imgCanny, imgDil, kernel);
erode(imgDil, imgErode, kernel);

    imshow("Image", img);
    imshow("imgGray", imgGray);
    imshow("imgBlur", imgBlur);
    imshow("Image Canny", imgCanny);
    imshow("imgDil", imgDil);
    imshow("imgErode", imgErode);
    
    
    waitKey(0);
    
    return 0;
}
 */
