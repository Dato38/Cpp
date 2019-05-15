#pragma once

class Vell{
	public:
		Vell();
		//
		void draw(Painter &) const;
		bool isCollision(const Tetromino &) const;
		int unite(const Tetromino &);
};

int main(int argc, char **argv){
       
}

