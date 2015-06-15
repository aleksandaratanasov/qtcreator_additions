project(%ProjectName%)
cmake_minimum_required(VERSION 2.8)

# Add only required OpenCV components:
# - highgui
# - core
# - imgproc
# - calib3d
# - features2d
# - flann
# - contrib
# - video
# - photo
# - objdetect
# - ml

find_package(OpenCV REQUIRED COMPONENTS highgui imgproc)
if(OpenCV_FOUND)
  message("Found OpenCV")
endif()

aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
