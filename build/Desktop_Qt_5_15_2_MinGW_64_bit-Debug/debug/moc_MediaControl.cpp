/****************************************************************************
** Meta object code from reading C++ file 'MediaControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Control/MediaControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MediaControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediaController_t {
    QByteArrayData data[76];
    char stringdata0[1008];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaController_t qt_meta_stringdata_MediaController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MediaController"
QT_MOC_LITERAL(1, 16, 15), // "positionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "durationChanged"
QT_MOC_LITERAL(4, 49, 19), // "listSongPathChanged"
QT_MOC_LITERAL(5, 69, 20), // "listVideoPathChanged"
QT_MOC_LITERAL(6, 90, 13), // "volumeChanged"
QT_MOC_LITERAL(7, 104, 16), // "songModelChanged"
QT_MOC_LITERAL(8, 121, 17), // "videoModelChanged"
QT_MOC_LITERAL(9, 139, 12), // "indexChanged"
QT_MOC_LITERAL(10, 152, 17), // "indexVideoChanged"
QT_MOC_LITERAL(11, 170, 17), // "proxyMusicChanged"
QT_MOC_LITERAL(12, 188, 17), // "proxyVideoChanged"
QT_MOC_LITERAL(13, 206, 19), // "videoSurfaceChanged"
QT_MOC_LITERAL(14, 226, 20), // "setIndexMediaChanged"
QT_MOC_LITERAL(15, 247, 13), // "getMusicLocal"
QT_MOC_LITERAL(16, 261, 13), // "getVideoLocal"
QT_MOC_LITERAL(17, 275, 14), // "getFolderMusic"
QT_MOC_LITERAL(18, 290, 14), // "getFolderVideo"
QT_MOC_LITERAL(19, 305, 13), // "getMusicTitle"
QT_MOC_LITERAL(20, 319, 9), // "indexSong"
QT_MOC_LITERAL(21, 329, 14), // "getMusicArtist"
QT_MOC_LITERAL(22, 344, 13), // "getVideoTitle"
QT_MOC_LITERAL(23, 358, 10), // "indexVideo"
QT_MOC_LITERAL(24, 369, 14), // "getVideoArtist"
QT_MOC_LITERAL(25, 384, 9), // "playMusic"
QT_MOC_LITERAL(26, 394, 5), // "index"
QT_MOC_LITERAL(27, 400, 9), // "playVideo"
QT_MOC_LITERAL(28, 410, 10), // "pauseMedia"
QT_MOC_LITERAL(29, 421, 11), // "resumeMedia"
QT_MOC_LITERAL(30, 433, 9), // "nextMedia"
QT_MOC_LITERAL(31, 443, 13), // "previousMedia"
QT_MOC_LITERAL(32, 457, 11), // "repeatMedia"
QT_MOC_LITERAL(33, 469, 11), // "repeatIndex"
QT_MOC_LITERAL(34, 481, 12), // "shuffleMedia"
QT_MOC_LITERAL(35, 494, 16), // "adjustSpeedMedia"
QT_MOC_LITERAL(36, 511, 4), // "rate"
QT_MOC_LITERAL(37, 516, 11), // "seekForward"
QT_MOC_LITERAL(38, 528, 8), // "seekBack"
QT_MOC_LITERAL(39, 537, 12), // "setMusicPlay"
QT_MOC_LITERAL(40, 550, 12), // "setVideoPlay"
QT_MOC_LITERAL(41, 563, 11), // "removeMusic"
QT_MOC_LITERAL(42, 575, 11), // "removeVideo"
QT_MOC_LITERAL(43, 587, 14), // "sortTitleMusic"
QT_MOC_LITERAL(44, 602, 4), // "type"
QT_MOC_LITERAL(45, 607, 14), // "sortAlbumMusic"
QT_MOC_LITERAL(46, 622, 15), // "sortArtistMusic"
QT_MOC_LITERAL(47, 638, 11), // "filterMusic"
QT_MOC_LITERAL(48, 650, 4), // "text"
QT_MOC_LITERAL(49, 655, 14), // "sortTitleVideo"
QT_MOC_LITERAL(50, 670, 14), // "sortAlbumVideo"
QT_MOC_LITERAL(51, 685, 15), // "sortArtistVideo"
QT_MOC_LITERAL(52, 701, 11), // "filterVideo"
QT_MOC_LITERAL(53, 713, 12), // "songCoverArt"
QT_MOC_LITERAL(54, 726, 9), // "setSource"
QT_MOC_LITERAL(55, 736, 6), // "source"
QT_MOC_LITERAL(56, 743, 8), // "setIndex"
QT_MOC_LITERAL(57, 752, 8), // "newIndex"
QT_MOC_LITERAL(58, 761, 13), // "setIndexVideo"
QT_MOC_LITERAL(59, 775, 13), // "newIndexVideo"
QT_MOC_LITERAL(60, 789, 17), // "transtoVietNamese"
QT_MOC_LITERAL(61, 807, 14), // "transtoEnglish"
QT_MOC_LITERAL(62, 822, 12), // "listSongPath"
QT_MOC_LITERAL(63, 835, 13), // "listVideoPath"
QT_MOC_LITERAL(64, 849, 8), // "position"
QT_MOC_LITERAL(65, 858, 8), // "duration"
QT_MOC_LITERAL(66, 867, 6), // "volume"
QT_MOC_LITERAL(67, 874, 9), // "songModel"
QT_MOC_LITERAL(68, 884, 15), // "ListMusicModel*"
QT_MOC_LITERAL(69, 900, 10), // "videoModel"
QT_MOC_LITERAL(70, 911, 15), // "ListVideoModel*"
QT_MOC_LITERAL(71, 927, 10), // "proxyMusic"
QT_MOC_LITERAL(72, 938, 22), // "QSortFilterProxyModel*"
QT_MOC_LITERAL(73, 961, 10), // "proxyVideo"
QT_MOC_LITERAL(74, 972, 12), // "videoSurface"
QT_MOC_LITERAL(75, 985, 22) // "QAbstractVideoSurface*"

    },
    "MediaController\0positionChanged\0\0"
    "durationChanged\0listSongPathChanged\0"
    "listVideoPathChanged\0volumeChanged\0"
    "songModelChanged\0videoModelChanged\0"
    "indexChanged\0indexVideoChanged\0"
    "proxyMusicChanged\0proxyVideoChanged\0"
    "videoSurfaceChanged\0setIndexMediaChanged\0"
    "getMusicLocal\0getVideoLocal\0getFolderMusic\0"
    "getFolderVideo\0getMusicTitle\0indexSong\0"
    "getMusicArtist\0getVideoTitle\0indexVideo\0"
    "getVideoArtist\0playMusic\0index\0playVideo\0"
    "pauseMedia\0resumeMedia\0nextMedia\0"
    "previousMedia\0repeatMedia\0repeatIndex\0"
    "shuffleMedia\0adjustSpeedMedia\0rate\0"
    "seekForward\0seekBack\0setMusicPlay\0"
    "setVideoPlay\0removeMusic\0removeVideo\0"
    "sortTitleMusic\0type\0sortAlbumMusic\0"
    "sortArtistMusic\0filterMusic\0text\0"
    "sortTitleVideo\0sortAlbumVideo\0"
    "sortArtistVideo\0filterVideo\0songCoverArt\0"
    "setSource\0source\0setIndex\0newIndex\0"
    "setIndexVideo\0newIndexVideo\0"
    "transtoVietNamese\0transtoEnglish\0"
    "listSongPath\0listVideoPath\0position\0"
    "duration\0volume\0songModel\0ListMusicModel*\0"
    "videoModel\0ListVideoModel*\0proxyMusic\0"
    "QSortFilterProxyModel*\0proxyVideo\0"
    "videoSurface\0QAbstractVideoSurface*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
      12,  356, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x06 /* Public */,
       3,    0,  265,    2, 0x06 /* Public */,
       4,    0,  266,    2, 0x06 /* Public */,
       5,    0,  267,    2, 0x06 /* Public */,
       6,    0,  268,    2, 0x06 /* Public */,
       7,    0,  269,    2, 0x06 /* Public */,
       8,    0,  270,    2, 0x06 /* Public */,
       9,    0,  271,    2, 0x06 /* Public */,
      10,    0,  272,    2, 0x06 /* Public */,
      11,    0,  273,    2, 0x06 /* Public */,
      12,    0,  274,    2, 0x06 /* Public */,
      13,    0,  275,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  276,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  277,    2, 0x02 /* Public */,
      16,    0,  278,    2, 0x02 /* Public */,
      17,    0,  279,    2, 0x02 /* Public */,
      18,    0,  280,    2, 0x02 /* Public */,
      19,    1,  281,    2, 0x02 /* Public */,
      21,    1,  284,    2, 0x02 /* Public */,
      22,    1,  287,    2, 0x02 /* Public */,
      24,    1,  290,    2, 0x02 /* Public */,
      25,    1,  293,    2, 0x02 /* Public */,
      27,    1,  296,    2, 0x02 /* Public */,
      28,    0,  299,    2, 0x02 /* Public */,
      29,    0,  300,    2, 0x02 /* Public */,
      30,    0,  301,    2, 0x02 /* Public */,
      31,    0,  302,    2, 0x02 /* Public */,
      32,    1,  303,    2, 0x02 /* Public */,
      34,    0,  306,    2, 0x02 /* Public */,
      35,    1,  307,    2, 0x02 /* Public */,
      37,    0,  310,    2, 0x02 /* Public */,
      38,    0,  311,    2, 0x02 /* Public */,
      39,    0,  312,    2, 0x02 /* Public */,
      40,    0,  313,    2, 0x02 /* Public */,
      41,    1,  314,    2, 0x02 /* Public */,
      42,    1,  317,    2, 0x02 /* Public */,
      43,    1,  320,    2, 0x02 /* Public */,
      45,    1,  323,    2, 0x02 /* Public */,
      46,    1,  326,    2, 0x02 /* Public */,
      47,    1,  329,    2, 0x02 /* Public */,
      49,    1,  332,    2, 0x02 /* Public */,
      50,    1,  335,    2, 0x02 /* Public */,
      51,    1,  338,    2, 0x02 /* Public */,
      52,    1,  341,    2, 0x02 /* Public */,
      53,    0,  344,    2, 0x02 /* Public */,
      54,    1,  345,    2, 0x02 /* Public */,
      56,    1,  348,    2, 0x02 /* Public */,
      58,    1,  351,    2, 0x02 /* Public */,
      60,    0,  354,    2, 0x02 /* Public */,
      61,    0,  355,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantList,
    QMetaType::QVariantList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   20,
    QMetaType::QString, QMetaType::Int,   20,
    QMetaType::QString, QMetaType::Int,   23,
    QMetaType::QString, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      62, QMetaType::QStringList, 0x00495103,
      63, QMetaType::QStringList, 0x00495103,
      64, QMetaType::LongLong, 0x00495103,
      65, QMetaType::LongLong, 0x00495001,
      66, QMetaType::Int, 0x00495103,
      67, 0x80000000 | 68, 0x0049510b,
      69, 0x80000000 | 70, 0x0049510b,
      26, QMetaType::Int, 0x00495103,
      23, QMetaType::Int, 0x00495103,
      71, 0x80000000 | 72, 0x0049510b,
      73, 0x80000000 | 72, 0x0049510b,
      74, 0x80000000 | 75, 0x0049510b,

 // properties: notify_signal_id
       2,
       3,
       0,
       1,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,

       0        // eod
};

void MediaController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->durationChanged(); break;
        case 2: _t->listSongPathChanged(); break;
        case 3: _t->listVideoPathChanged(); break;
        case 4: _t->volumeChanged(); break;
        case 5: _t->songModelChanged(); break;
        case 6: _t->videoModelChanged(); break;
        case 7: _t->indexChanged(); break;
        case 8: _t->indexVideoChanged(); break;
        case 9: _t->proxyMusicChanged(); break;
        case 10: _t->proxyVideoChanged(); break;
        case 11: _t->videoSurfaceChanged(); break;
        case 12: _t->setIndexMediaChanged(); break;
        case 13: { QVariantList _r = _t->getMusicLocal();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QVariantList _r = _t->getVideoLocal();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->getFolderMusic(); break;
        case 16: _t->getFolderVideo(); break;
        case 17: { QString _r = _t->getMusicTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->getMusicArtist((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->getVideoTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 20: { QString _r = _t->getVideoArtist((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->playMusic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->playVideo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->pauseMedia(); break;
        case 24: _t->resumeMedia(); break;
        case 25: _t->nextMedia(); break;
        case 26: _t->previousMedia(); break;
        case 27: _t->repeatMedia((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->shuffleMedia(); break;
        case 29: _t->adjustSpeedMedia((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 30: _t->seekForward(); break;
        case 31: _t->seekBack(); break;
        case 32: _t->setMusicPlay(); break;
        case 33: _t->setVideoPlay(); break;
        case 34: _t->removeMusic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->removeVideo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->sortTitleMusic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->sortAlbumMusic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->sortArtistMusic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->filterMusic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->sortTitleVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->sortAlbumVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->sortArtistVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->filterVideo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: { QString _r = _t->songCoverArt();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->setSource((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->setIndexVideo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->transtoVietNamese(); break;
        case 49: _t->transtoEnglish(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::durationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::listSongPathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::listVideoPathChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::volumeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::songModelChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::videoModelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::indexChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::indexVideoChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::proxyMusicChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::proxyVideoChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MediaController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaController::videoSurfaceChanged)) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ListMusicModel* >(); break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ListVideoModel* >(); break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoSurface* >(); break;
        case 10:
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MediaController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->listSongPath(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->listVideoPath(); break;
        case 2: *reinterpret_cast< qint64*>(_v) = _t->position(); break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->duration(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 5: *reinterpret_cast< ListMusicModel**>(_v) = _t->songModel(); break;
        case 6: *reinterpret_cast< ListVideoModel**>(_v) = _t->videoModel(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->indexVideo(); break;
        case 9: *reinterpret_cast< QSortFilterProxyModel**>(_v) = _t->proxyMusic(); break;
        case 10: *reinterpret_cast< QSortFilterProxyModel**>(_v) = _t->proxyVideo(); break;
        case 11: *reinterpret_cast< QAbstractVideoSurface**>(_v) = _t->videoSurface(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MediaController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setListSongPath(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setListVideoPath(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setPosition(*reinterpret_cast< qint64*>(_v)); break;
        case 4: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSongModel(*reinterpret_cast< ListMusicModel**>(_v)); break;
        case 6: _t->setVideoModel(*reinterpret_cast< ListVideoModel**>(_v)); break;
        case 7: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setIndexVideo(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setProxyMusic(*reinterpret_cast< QSortFilterProxyModel**>(_v)); break;
        case 10: _t->setProxyVideo(*reinterpret_cast< QSortFilterProxyModel**>(_v)); break;
        case 11: _t->setVideoSurface(*reinterpret_cast< QAbstractVideoSurface**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MediaController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MediaController.data,
    qt_meta_data_MediaController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MediaController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MediaController::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MediaController::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MediaController::listSongPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MediaController::listVideoPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MediaController::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MediaController::songModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MediaController::videoModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MediaController::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MediaController::indexVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MediaController::proxyMusicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MediaController::proxyVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MediaController::videoSurfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
