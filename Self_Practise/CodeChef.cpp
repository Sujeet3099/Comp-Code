// memset(coontainer_name, value_to_put, size_of_container);  (memset basic syntax) 
// value to be put can only be 0 or -1 any value other than that may not work coorectly
// ex:-
std::vector<int> v;
memset(v,0,sizeof(v));
//sieve of eratosthenes (to list all the prime numbers <= n) its timeComplexity is O(N*loglogN)
std::vector<int> prime;
for (int i = 0; i <= n; ++i)
{
	if(is_composite[i]) 
		continue;
	prime.push_back(i);
	for (int j = i; j < n; j+=i)
	{
		is_composite[j] = 1;
	}
}//O(N*log(logN))

// bit
const int N = 100, LOGN = 8;
int total = 0;

bool is_bit_on(int x, int pos) {
  return ((x & (1 << pos)) != 0);
}

void flip_bit(int &x, int pos) {
  x ^= (1 << pos);
}

void increment(int &x) {
  for(int i = 0; i < LOGN; i++) {
  	total++;
    if(is_bit_on(x, i) == 1) {
      flip_bit(x, i);
    } else {
      flip_bit(x, i);
      break;
    }
  }
}

int main() {
  int counter = 0;
  for(int i = 1; i < N; i++) {
    increment(counter);
  }
  // how slow?
}