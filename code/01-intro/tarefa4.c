int process_pixel(int level, int brightness)
{
    int new_level;

    if (level + brightness > 255)
        new_level = 255;
    else 
        new_level = level + brightness;

    return new_level;
}
