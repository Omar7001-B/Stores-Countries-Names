#include <iostream>
int main() {
    printf("Please Enter The Number Of Countries You Want To Store\n");
    int countiresNums; scanf("%d",&countiresNums);
    printf("Please Enter the %d's Countries\n",countiresNums);
    std::string countires[100];
    for(int i=0;i<countiresNums;i++) 
        std::cin >> countires[i];
    printf("The Countires You've Entered Are:\n");
    for(int i=0;i<countiresNums;i++)
           std::cout << countires[i] << '\n';
    return 0;
}
