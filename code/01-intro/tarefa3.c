int process_pixel(int level, int scale)
{
    int new_level;

    if (level < scale)
        new_level = 0;
    else
        new_level = 255;

    return new_level;
}
