# Face-Swapping-using-OpenCV--3.1.0
OpenCV- 3.1.0 and Microsoft Visual studio 2015
Introduction:
Face Swapping is the current trend in social media platform. To capture this current trend. Main Objective of the project is - swapping faces of two images. We are using OpenCV library to achieve face swapping. We included the following steps to achieve face swapping in our project.
1. Image selection
2. Face selection from the images
3. Extracting the selection
4. Swapping the faces
Method:
As we have described in our project proposal, we first detect a face using in an image. In this project we have used two separate image files. First we have used ellipse method in OpenCV to select the elliptical size of the face in the first image. Then we have done bitwise_and operation to cut only face from that image. After this step we have stored the image with no face, for this operation we have used cv::subtract method. Then we have followed the whole steps once again for the second image file also. After that we perform cv::add method; here we add first image file with no face(Nfc1) & only face of the second image file (face2) and vice versa (i.e. Nfc2 with face1) . Before performing cv::add method we resize both the image files using cv::resize method and first declare size of the image declaring Size size(300, 300) – by this way.
Project Specifications:
 OpenCV- 3.1.0
 Microsoft Visual Studio 2015

Results:
The objective of implementing and executing the project in Visual studio with C++ using OpenCV library to face swap returned positive accurate results. OpenCV is a great library and mainly used for tasks that are complex in nature for image processing related projects.
Firstly, the images of faces to be swapped are successfully read (ref. Image 1). Later there were constraints in finding the right coordinates for extracting the elliptical size of the faces but through thorough iterations of replacing the co-ordinates with different values, the faces were sized and extracted from the images accurately (ref. Image 2). We also have shown here the images with no faces. (ref. Image 3).
Finally, the extracted images were swapped and added onto the images leading us to the objective of the project (ref. Image 4).


References:
1. www.google.com
2. http://opencvexamples.blogspot.com/
3. http://answers.opencv.org/

