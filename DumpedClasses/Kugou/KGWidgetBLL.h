//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGWidgetBLL : NSObject
{
    _Bool _isWidgetIn_songDetail;
    _Bool _isWidgetIn_FM;
    _Bool _isWidgetIn_guessYouLike;
    _Bool _isWidgetIn_reconizedSong;
    _Bool _isWidgetIn_localMusic;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isWidgetIn_localMusic; // @synthesize isWidgetIn_localMusic=_isWidgetIn_localMusic;
@property(nonatomic) _Bool isWidgetIn_reconizedSong; // @synthesize isWidgetIn_reconizedSong=_isWidgetIn_reconizedSong;
@property(nonatomic) _Bool isWidgetIn_guessYouLike; // @synthesize isWidgetIn_guessYouLike=_isWidgetIn_guessYouLike;
@property(nonatomic) _Bool isWidgetIn_FM; // @synthesize isWidgetIn_FM=_isWidgetIn_FM;
@property(nonatomic) _Bool isWidgetIn_songDetail; // @synthesize isWidgetIn_songDetail=_isWidgetIn_songDetail;
- (void)initData;

@end

