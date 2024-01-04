// calce.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Button.h"
int main()
{
	RenderWindow win(VideoMode(600, 800), "Calc");
	Event event;
	int i = 0;
	Butt butt1(15, 400, 120, 70, Color::Magenta);
	Butt butt2(15, 500, 120, 70, Color::Magenta);
	Butt butt3(15, 600, 120, 70, Color::Magenta);

	Butt butt4(165, 400, 120, 70, Color::Magenta);
	Butt butt5(165, 500, 120, 70, Color::Magenta);
	Butt butt6(165, 600, 120, 70, Color::Magenta);

	Butt butt7(320, 400, 120, 70, Color::Magenta);
	Butt butt8(320, 500, 120, 70, Color::Magenta);
	Butt butt9(320, 600, 120, 70, Color::Magenta);

	Butt butt0(165, 700, 120, 70, Color::Magenta);

	Butt buttPlu(470, 400, 120, 70, Color::Magenta);
	Butt buttMim(470, 500, 120, 70, Color::Magenta);
	Butt buttDel(470, 600, 120, 70, Color::Magenta);
	Butt buttYmnoshen(470, 700, 120, 70, Color::Magenta);

	while (win.isOpen()) {
		while (win.pollEvent(event))  // Цикл игровых событий: нажатие клавишь, перемещение мышки и другие.
		{
			if (event.type == Event::Closed) win.close(); // Закрыть окно
			
				butt1.mousePresBut(win, event);
				butt2.mousePresBut(win, event);
				butt3.mousePresBut(win, event);

				butt4.mousePresBut(win, event);
				butt5.mousePresBut(win, event);
				butt6.mousePresBut(win, event);

				butt7.mousePresBut(win, event);
				butt8.mousePresBut(win, event);
				butt9.mousePresBut(win, event);

				butt0.mousePresBut(win, event);
			

			buttPlu.mousePresBut(win, event);
			buttMim.mousePresBut(win, event);
			buttDel.mousePresBut(win, event);
			buttYmnoshen.mousePresBut(win, event);

		}
		win.clear();

		butt1.printButt(win);
		butt2.printButt(win);
		butt3.printButt(win);

		butt4.printButt(win);
		butt5.printButt(win);
		butt6.printButt(win);

		butt7.printButt(win);
		butt8.printButt(win);
		butt9.printButt(win);

		butt0.printButt(win);

		buttPlu.printButt(win);
		buttMim.printButt(win);
		buttDel.printButt(win);
		buttYmnoshen.printButt(win);

		win.display();
	}



}