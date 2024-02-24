# include <iostream>
# include <fstream>

// Declareiton
float fun(int k);

int main(void) {
    for(int m = 1; m <= 1000; m = m+1){
        float val = fun(m);
        std::cout << m << "\t" << val << "\n";
    }
    return 0;
}


// Implementation
float fun(int k)
{
  float result = 0.0;  
  float sum = 0.0;
  for(int i = 1; i <= k; ++i){
    sum = sum + 0.1;
  }
  result = std::abs((k / 10.0) - sum); 
  return result;
}