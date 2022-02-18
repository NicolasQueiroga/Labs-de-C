int process_pixel(int level, int alpha)
{
    int val = alpha * level;
    if (val > 255)
        return 255;
    else
        return val;
}
