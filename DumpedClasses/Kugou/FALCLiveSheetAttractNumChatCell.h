//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCBaseChatCell.h"

@class FAOHAttributedLabel, NSString;

@interface FALCLiveSheetAttractNumChatCell : FALCBaseChatCell
{
    FAOHAttributedLabel *_attributedLabel;
    NSString *_songName;
    long long _songSheetAttractNum;
    long long _cellHeight;
}

+ (id)getContentWithSongName:(id)arg1 attractNum:(long long)arg2 clearStyle:(_Bool)arg3;
+ (double)cellHeightOfMsg:(id)arg1 isFullScreen:(_Bool)arg2;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) long long songSheetAttractNum; // @synthesize songSheetAttractNum=_songSheetAttractNum;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) FAOHAttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1;
- (void)changeClearStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

