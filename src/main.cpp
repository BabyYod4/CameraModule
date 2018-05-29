#include "wrap-hwlib.hpp"

#include "camera.hpp"
#include "greyscale_pixel.hpp"
#include "image.hpp"
#include "mock.hpp"
#include "vector_2d.hpp"
#include "ycbcr.hpp"
int main() {
    WDT->WDT_MR = WDT_MR_WDDIS;

    hwlib::wait_ms(1000);
    Vector2D resolution;
    resolution.setX(100);
    resolution.setY(150);
    Mock camera;
    camera.setFPS(5);
    camera.setResolution(resolution);

    camera.setFPS(421);

    Vector2D position(5, 10);

    Image<YCbCr> plaatje;

    GreyscalePixel zwartpixel;
    YCbCr kleurplaatje = plaatje.getPixel(position);
    zwartpixel = kleurplaatje;

    Image<GreyscalePixel> zwartplaatje;
    hwlib::cout << "Image:" << hwlib::endl;
    hwlib::cout << zwartplaatje << hwlib::endl;
    return 0;
}