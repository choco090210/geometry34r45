struct point
{
    double x;
    double y;
};

double distance(point A,point B); 
bool is_triangle(point A,point B,point C);
double area_triangle(point A,point B,point C);
double area_pentagon(point A,point B,point C,point D,point E);
bool is_inside_triangle(point A,point B,point C,point D);