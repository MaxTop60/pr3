class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    int calculateTotalMinutes() const {
        return hours * 60 + minutes;
    }

    void decreaseTimeBy10Minutes() {
        int totalMinutes = hours * 60 + minutes;
        totalMinutes -= 10;

        if (totalMinutes < 0) {
            totalMinutes += 24 * 60; // обработка перехода через полночь
        }

        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }
};