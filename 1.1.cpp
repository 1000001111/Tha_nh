//Nguyen Ba Thanh - 20204786
# include <stdio.h>
int main(){
    int x, y, z;
    int* ptr;
//nhap vao 3 so nguyen
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
//in ra 3 so nguyen
    printf("\nThe three integers are:\n");
    ptr = &x;//con tro tro toi x
    printf("x = %d\n", *ptr);// in ra x
    ptr = &y;//con tro tro toi y
    printf("y = %d\n", *ptr);// in ra y
    ptr = &z;//con tro tro toi z
    printf("z = %d\n", *ptr);// in ra z
    return 0;
}




