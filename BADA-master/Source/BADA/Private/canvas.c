#include "canvas.h"

struct data
{
    int x;
    int y;
    int rgb_color;
};

struct data s_data[256];
size_t s_data_count = 0;

static uint32_t* s_canvas;
static size_t s_rows;
static size_t s_cols;

void set_canvas(uint32_t* canvas, size_t rows, size_t cols)
{
    s_canvas = canvas;
    s_rows = rows;
    s_cols = cols;
}

void release_canvas(void)
{
    
}

void draw_pixel(size_t x, size_t y, uint32_t rgb_color)
{
    s_canvas[y * s_cols + x]=rgb_color;
     s_data[s_data_count].x = x;
    s_data[s_data_count].y = y;
    s_data[s_data_count].rgb_color = rgb_color;

    s_data_count += 1;
}

void remove_pixel(size_t x, size_t y)
{
    s_canvas[y * s_cols + x] = 0xffffff;
}

void fill_canvas(uint32_t rgb_color)
{
    for ( int y = 0; y < s_rows; y++)
    {
        for ( int x = 0; x < s_cols; x++)
        {
            s_canvas[y * s_cols + x] =rgb_color;
        }
        
    }
    
}

void draw_horizontal_line(size_t y, uint32_t rgb_color)
{
    
    for (int x = 0; x < s_cols; x++)
    {
        s_canvas[y * s_cols + x] = rgb_color;
    }
    
}


void draw_vertical_line(size_t x, uint32_t rgb_color)
{
     
    for (int y = 0; y < s_rows; y++)
    {
        s_canvas[y * s_cols + x] = rgb_color;
    }
    
}

void draw_rectangle(size_t start_x, size_t start_y, size_t end_x, size_t end_y, uint32_t rgb_color)
{
    for (int y = start_y; y <= end_y; y++)
    {
        for (int x = start_x; x <= end_x; x++)
        {
            s_canvas[y * s_cols + x] = rgb_color;
        }

    }
}



int undo()
{
    int* s_data = (int*)malloc(sizeof(int) * s_data_count);
    for (int i = 0; i < s_data_count; i++)
        s_data[i] = i;
        
     return FALSE;
   
}


      


int redo()
{

    return FALSE;
}
