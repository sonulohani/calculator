#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow {
public:
  explicit MainWindow(QWidget *parent = nullptr);

  virtual ~MainWindow() override;
};

#endif // MAIN_WINDOW_H