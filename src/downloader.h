#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QUrl>

class Downloader : public QObject
{
    Q_OBJECT

public:
    static Downloader* instance(void);
    Downloader(QObject* parent = nullptr);
    ~Downloader();
    
    void addTasks(const QString& name, const QList<QUrl>& urls, const QUrl& danmakuUrl = QUrl(), bool isDash = false);
    QList<QObject*> model(void);
    
signals:
    void modelUpdated(void);
    
private:
    QList<QObject*> m_model;
};

#endif // DOWNLOADER_H
