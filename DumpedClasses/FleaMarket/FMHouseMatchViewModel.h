//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FMHouseMatchViewModel : NSObject
{
    _Bool _nextPage;
    _Bool _tipHasShown;
    _Bool _isModalPresent;
    NSMutableArray *_dataSource;
    long long _pageIdx;
    NSMutableDictionary *_pageLoadedFlags;
    NSMutableDictionary *_pageNowLoadingFlags;
    NSMutableDictionary *_tipShownFlags;
    NSString *_categoryID;
    NSString *_props;
    NSDictionary *_componentsDict;
    NSString *_searchGps;
    long long _lastOpCellIndex;
    long long _curCardIdx;
}

@property(nonatomic) long long curCardIdx; // @synthesize curCardIdx=_curCardIdx;
@property(nonatomic) long long lastOpCellIndex; // @synthesize lastOpCellIndex=_lastOpCellIndex;
@property(nonatomic) _Bool isModalPresent; // @synthesize isModalPresent=_isModalPresent;
@property(copy, nonatomic) NSString *searchGps; // @synthesize searchGps=_searchGps;
@property(retain, nonatomic) NSDictionary *componentsDict; // @synthesize componentsDict=_componentsDict;
@property(copy, nonatomic) NSString *props; // @synthesize props=_props;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSMutableDictionary *tipShownFlags; // @synthesize tipShownFlags=_tipShownFlags;
@property(retain, nonatomic) NSMutableDictionary *pageNowLoadingFlags; // @synthesize pageNowLoadingFlags=_pageNowLoadingFlags;
@property(retain, nonatomic) NSMutableDictionary *pageLoadedFlags; // @synthesize pageLoadedFlags=_pageLoadedFlags;
@property(nonatomic) _Bool tipHasShown; // @synthesize tipHasShown=_tipHasShown;
@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(nonatomic) long long pageIdx; // @synthesize pageIdx=_pageIdx;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_requestNextPage;
- (_Bool)shouldCurPageLoading;
- (void)requestNextForced:(_Bool)arg1;
- (id)init;

@end
