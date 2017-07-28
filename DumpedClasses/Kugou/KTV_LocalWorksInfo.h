//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface KTV_LocalWorksInfo : NSObject <NSCopying>
{
    _Bool _isAccompany;
    _Bool _isFavorite;
    _Bool _hasScore;
    _Bool _isTranKrc;
    _Bool _hasOriginal;
    _Bool _isPublish;
    _Bool _isUploaded;
    _Bool _isHQ;
    _Bool _hasPitch;
    _Bool _isSoundUploaded;
    _Bool _isAttach;
    _Bool _isFragmentRecord;
    int _id;
    int _singerId;
    int _songSize;
    int _recordTime;
    int _opusType;
    int _allowChorusType;
    int _vocalOpusSize;
    int _opusSize;
    int _soundEffectType;
    int _preSoundEffects;
    float _volume;
    float _personVolume;
    float _volumRate;
    float _voteRate;
    float _personVolumeRate;
    int _accompanyTone;
    int _voiceTone;
    int _voiceStyle;
    int _fromType;
    int _uploadStatus;
    int _shareType;
    int _showType;
    NSString *_ownerId;
    long long _songId;
    NSString *_albumURL;
    NSString *_workName;
    NSString *_songName;
    NSString *_singerName;
    long long _playTime;
    NSString *_hashKey;
    NSString *_singerImg;
    NSString *_songUrl;
    NSString *_songExtName;
    NSDate *_songUpdateTime;
    NSString *_saveFileName;
    NSString *_saveFileExtName;
    NSString *_saveFileMd5;
    NSString *_uploadUrl;
    long long _opusId;
    NSString *_originHashKey;
    NSString *_suitHash;
    NSString *_composeHash;
    NSString *_krcIdStr;
    long long _krcAjustTime;
    NSString *_saveSoundFileName;
    NSString *_saveSoundFileExtName;
    NSString *_soundUploadUrl;
    long long _opusParentId;
    NSString *_opusParentPlayerBase;
    NSString *_vocalOpusHash;
    NSString *_krcChorusSetting;
    NSString *_pitch;
    NSString *_scores;
    NSString *_sentenceScore;
    NSDate *_createDate;
    NSDate *_updateDate;
    NSString *_remark1;
    NSString *_remark2;
    NSString *_remark3;
    NSString *_shareContent;
    long long _inviteId;
    long long _channelId;
    NSString *_channelText;
    NSString *_shareAdsContext;
    NSString *_scoreLevel;
    long long _fragmentStartTime;
    long long _fragmentEndTime;
    long long _scid;
    NSString *_version;
}

+ (id)getAutoincrementPrimaryKey;
+ (id)getPrimaryKey;
+ (_Bool)showTipByOpusType:(int)arg1 message:(id *)arg2;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long scid; // @synthesize scid=_scid;
@property(nonatomic) _Bool isFragmentRecord; // @synthesize isFragmentRecord=_isFragmentRecord;
@property(nonatomic) long long fragmentEndTime; // @synthesize fragmentEndTime=_fragmentEndTime;
@property(nonatomic) long long fragmentStartTime; // @synthesize fragmentStartTime=_fragmentStartTime;
@property(retain, nonatomic) NSString *scoreLevel; // @synthesize scoreLevel=_scoreLevel;
@property(copy, nonatomic) NSString *shareAdsContext; // @synthesize shareAdsContext=_shareAdsContext;
@property(retain, nonatomic) NSString *channelText; // @synthesize channelText=_channelText;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) long long inviteId; // @synthesize inviteId=_inviteId;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool isAttach; // @synthesize isAttach=_isAttach;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(retain, nonatomic) NSString *remark3; // @synthesize remark3=_remark3;
@property(retain, nonatomic) NSString *remark2; // @synthesize remark2=_remark2;
@property(retain, nonatomic) NSString *remark1; // @synthesize remark1=_remark1;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int voiceStyle; // @synthesize voiceStyle=_voiceStyle;
@property(nonatomic) int voiceTone; // @synthesize voiceTone=_voiceTone;
@property(nonatomic) int accompanyTone; // @synthesize accompanyTone=_accompanyTone;
@property(nonatomic) float personVolumeRate; // @synthesize personVolumeRate=_personVolumeRate;
@property(nonatomic) float voteRate; // @synthesize voteRate=_voteRate;
@property(nonatomic) float volumRate; // @synthesize volumRate=_volumRate;
@property(nonatomic) float personVolume; // @synthesize personVolume=_personVolume;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) int preSoundEffects; // @synthesize preSoundEffects=_preSoundEffects;
@property(nonatomic) int soundEffectType; // @synthesize soundEffectType=_soundEffectType;
@property(retain, nonatomic) NSString *sentenceScore; // @synthesize sentenceScore=_sentenceScore;
@property(retain, nonatomic) NSString *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NSString *pitch; // @synthesize pitch=_pitch;
@property(retain, nonatomic) NSString *krcChorusSetting; // @synthesize krcChorusSetting=_krcChorusSetting;
@property(retain, nonatomic) NSString *vocalOpusHash; // @synthesize vocalOpusHash=_vocalOpusHash;
@property(retain, nonatomic) NSString *opusParentPlayerBase; // @synthesize opusParentPlayerBase=_opusParentPlayerBase;
@property(nonatomic) long long opusParentId; // @synthesize opusParentId=_opusParentId;
@property(nonatomic) int opusSize; // @synthesize opusSize=_opusSize;
@property(nonatomic) int vocalOpusSize; // @synthesize vocalOpusSize=_vocalOpusSize;
@property(retain, nonatomic) NSString *soundUploadUrl; // @synthesize soundUploadUrl=_soundUploadUrl;
@property(retain, nonatomic) NSString *saveSoundFileExtName; // @synthesize saveSoundFileExtName=_saveSoundFileExtName;
@property(retain, nonatomic) NSString *saveSoundFileName; // @synthesize saveSoundFileName=_saveSoundFileName;
@property(nonatomic) _Bool isSoundUploaded; // @synthesize isSoundUploaded=_isSoundUploaded;
@property(nonatomic) int allowChorusType; // @synthesize allowChorusType=_allowChorusType;
@property(nonatomic) int opusType; // @synthesize opusType=_opusType;
@property(nonatomic) _Bool hasPitch; // @synthesize hasPitch=_hasPitch;
@property(nonatomic) _Bool isHQ; // @synthesize isHQ=_isHQ;
@property(nonatomic) long long krcAjustTime; // @synthesize krcAjustTime=_krcAjustTime;
@property(retain, nonatomic) NSString *krcIdStr; // @synthesize krcIdStr=_krcIdStr;
@property(retain, nonatomic) NSString *composeHash; // @synthesize composeHash=_composeHash;
@property(retain, nonatomic) NSString *suitHash; // @synthesize suitHash=_suitHash;
@property(retain, nonatomic) NSString *originHashKey; // @synthesize originHashKey=_originHashKey;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) _Bool isPublish; // @synthesize isPublish=_isPublish;
@property(nonatomic) int recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSString *saveFileMd5; // @synthesize saveFileMd5=_saveFileMd5;
@property(retain, nonatomic) NSString *saveFileExtName; // @synthesize saveFileExtName=_saveFileExtName;
@property(retain, nonatomic) NSString *saveFileName; // @synthesize saveFileName=_saveFileName;
@property(retain, nonatomic) NSDate *songUpdateTime; // @synthesize songUpdateTime=_songUpdateTime;
@property(retain, nonatomic) NSString *songExtName; // @synthesize songExtName=_songExtName;
@property(nonatomic) int songSize; // @synthesize songSize=_songSize;
@property(retain, nonatomic) NSString *songUrl; // @synthesize songUrl=_songUrl;
@property(retain, nonatomic) NSString *singerImg; // @synthesize singerImg=_singerImg;
@property(nonatomic) _Bool hasOriginal; // @synthesize hasOriginal=_hasOriginal;
@property(nonatomic) _Bool isTranKrc; // @synthesize isTranKrc=_isTranKrc;
@property(nonatomic) _Bool hasScore; // @synthesize hasScore=_hasScore;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) _Bool isAccompany; // @synthesize isAccompany=_isAccompany;
@property(retain, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(nonatomic) long long playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(nonatomic) int singerId; // @synthesize singerId=_singerId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *workName; // @synthesize workName=_workName;
@property(copy, nonatomic) NSString *albumURL; // @synthesize albumURL=_albumURL;
@property(nonatomic) long long songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) int id; // @synthesize id=_id;
- (void).cxx_destruct;
- (int)isallowChorusType;
- (_Bool)isSeparateSound;
- (long long)isPermitChorusWithMessage:(id *)arg1;
- (id)getTheMaxMachHash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
