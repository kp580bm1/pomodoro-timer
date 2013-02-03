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
	int getBreakLength() const;
	void setBreakLength(int value);

	const QString & getStartSound() const;
	void setStartSound(const QString & value);
	const QString & getEndSound() const;
	void setEndSound(const QString & value);
private:
	int pomodoroLength;
	int breakLength;
	QString startSound;
	QString endSound;
};
