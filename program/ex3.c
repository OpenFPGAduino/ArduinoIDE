int main(int argn, char* argv[])
{
    fpga_open();
    led(0, 0,255,0);
    led(1, 0 ,0 ,255);
    led(2, 0 ,255,0);
    led(3, 255,0,0);
    return 0;
}
