#include "ErrorDialog.hpp"
#include "Generated/Scripts.hpp"

#include <QApplication>
#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QDesktopServices>

namespace CppProject
{
	ErrorDialog::ErrorDialog(QString error)
	{
		QDialog::setWindowFlag(Qt::WindowContextHelpButtonHint, false);
		QDialog::setFixedSize(400, 400);
		QDialog::setStyleSheet("font-size: 12px;");

		QBoxLayout* mainLayout = new QVBoxLayout;
		mainLayout->setSpacing(12);

		mainLayout->addWidget(new QLabel("A fatal error has occurred!"));

		// Error
		QTextEdit* textArea = new QTextEdit;
		textArea->setReadOnly(true);
		textArea->setStyleSheet("font-family: Consolas");
		textArea->setPlainText(error + "\nVersion: " + mineimator_version_full + "\nOS: " + os_get());
		mainLayout->addWidget(textArea);

		// Report
		QLabel* text1 = new QLabel("Please report the error on the Mine-imator forums along with the log file contents and instructions how to recreate the error message. If the issue occurs with a certain project file, please upload the project folder as well and include a link to it in your topic.");
		text1->setWordWrap(true);
		mainLayout->addWidget(text1);

		QPushButton* button1 = new QPushButton("View log");
		QPushButton* button2 = new QPushButton("Visit forums");
		QPushButton* button3 = new QPushButton("Upload project");
		button1->setFixedHeight(42);
		button2->setFixedHeight(42);
		button3->setFixedHeight(42);
		button1->connect(button1, &QPushButton::released, [&]() { QDesktopServices::openUrl((QString)log_file); });
		button2->connect(button2, &QPushButton::released, [&]() { QDesktopServices::openUrl((QString)link_forums_bugs); });
		button3->connect(button3, &QPushButton::released, [&]() { QDesktopServices::openUrl((QString)link_forums_upload); });

		QLayout* buttonLayout = new QHBoxLayout;
		buttonLayout->addWidget(button1);
		buttonLayout->addWidget(button2);
		buttonLayout->addWidget(button3);
		mainLayout->addLayout(buttonLayout);

		QLabel* text2 = new QLabel("Unsaved work will be lost, however backups may be available in the project folder depending on your settings.");
		text2->setWordWrap(true);
		mainLayout->addWidget(text2);

		// Close
		QPushButton* button4 = new QPushButton("Restart");
		QPushButton* button5 = new QPushButton("Abort");
		button4->connect(button4, &QPushButton::released, [&]() { QDesktopServices::openUrl(QUrl("Mine-imator.exe")); QDialog::close(); });
		button5->connect(button5, &QPushButton::released, [&]() { QDialog::close(); });
		button4->setFixedSize(88, 28);
		button5->setFixedSize(88, 28);

		QLayout* buttonLayout2 = new QHBoxLayout;
		buttonLayout2->addWidget(button4);
		buttonLayout2->addWidget(button5);
		mainLayout->addLayout(buttonLayout2);
		mainLayout->setAlignment(buttonLayout2, Qt::AlignRight);

		QDialog::setLayout(mainLayout);
		QDialog::exec();
	}
}