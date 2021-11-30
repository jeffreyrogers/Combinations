#include <iostream>
#include <vector>

bool
NextCombo(std::vector<int>& combo, int n)
{
	int k = (int)combo.size();
	for (int i = k - 1; i >= 0; i--) {
		if (combo[i] < (n - k + i + 1)) {
			combo[i]++;
			for (int j = i + 1; j < k; j++) {
				combo[j] = combo[(size_t)j - 1] + 1;
			}
			return true;
		}
	}
	return false;
}

void
PrintCombo(std::vector<int>& combo)
{
	for (int c : combo) {
		std::cout << c << " ";
	}
	std::cout << std::endl;
}

int
main(int argc, char* argv[])
{
	if (argc != 3) {
		std::cerr << "Usage: " << argv[0] << " n k" << std::endl;
		return -1;
	}

	int n = atoi(argv[1]);
	int k = atoi(argv[2]);

	std::cout << "All " << n << " choose " << k << " combinations:" << std::endl;

	std::vector<int> combo;
	for (int i = 1; i <= k; i++) {
		combo.push_back(i);
	}
	PrintCombo(combo);
	while (NextCombo(combo, n)) {
		PrintCombo(combo);
	}
}