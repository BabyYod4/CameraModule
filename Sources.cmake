# Libraries:

link_libraries (gcc)

set (hwlib ${build_environment}/libraries/hwlib)
include_directories (${hwlib}/library)

set (catch ${build_environment}/libraries/Catch2)
include_directories (${catch}/single_include)

# Source Files:

set (sources
    src/color_pixel.cpp
    src/greyscale_pixel.cpp
    src/mock.cpp
    src/vector_2d.cpp
    src/ycbcr.cpp
    src/pi_cam.cpp
)
