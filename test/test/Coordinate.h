#pragma once
class Coordinate
{
public:
	Coordinate(int x,int y);
	~Coordinate();

	void setX(int x) ;
	int getX() const;// ��ɳ���Ա����
	void setY(int y);
	int getY() const;
private:
	int m_iX;
	int m_iY;
};

