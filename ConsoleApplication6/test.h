#pragma once

class Test {
private:
	int i = 0;

public:
	void SetI(int i) {
		this->i = i;
	};

	int GetI() {
		return i;
	};
};