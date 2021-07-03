#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc, char* argv[]) {
 Mat image;
 //此改为⾃⼰的图⽚路径（相对路径或绝对路径皆可）
 image = imread("/home/andy/project/hello_world/dog.jpeg");
 imshow("dog", image);
 waitKey(0);
 return 0;
}
