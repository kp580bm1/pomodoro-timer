#pragma once

class Settings {
public:
	enum { SECOND = 1000, MINUTE = 60 * SECOND };

	Settings();
	virtual ~Settings() {}

	void load();
	void save() const;

	int getPomodoroLength() const;
	void setPomodoroLength(int value);
	int getPomodoroCycleSize() const;
	void setPomodoroCycleSize(int value);
	int getShortBreakLength() const;
	void setShortBreakLength(int value);
	int getLongBreakLength() const;
	void setLongBreakLength(int value);
private:
	int pomodoroLength;
	int pomodoroCycleSize;
	int shortBreakLength;
	int longBreakLength;
};

