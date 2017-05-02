#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"


int main(int argc, char* argv[]){
	
	//Start off with a simple load function
	if(argc < 2){
		std::cout << "Place an image as a function argument" << std::endl;
		return -1;
	}

	//Create the OpenCV image container
	cv::Mat image_in;

	//Load the image
	image_in = cv::imread(argv[1], -1);

	//Check if image loaded correctly
	if(!image_in.data){
		std::cout << "Failed to load image" << std::endl;
		return -1;
	}

	//Create the display window
	cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
	
	//Place image in window
	cv::imshow("Display Window", image_in);
	
	//Wait for user input
	cv::waitKey(0);

	//Destroy window
	cv::destroyWindow("Display Window");

	return 0; 
}