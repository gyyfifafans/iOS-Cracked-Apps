//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXAbstractRSSReader.h"

@class NSMutableArray;

@interface ZXRSS14Reader : ZXAbstractRSSReader
{
    NSMutableArray *_possibleLeftPairs;
    NSMutableArray *_possibleRightPairs;
}

@property(readonly, nonatomic) NSMutableArray *possibleRightPairs; // @synthesize possibleRightPairs=_possibleRightPairs;
@property(readonly, nonatomic) NSMutableArray *possibleLeftPairs; // @synthesize possibleLeftPairs=_possibleLeftPairs;
- (void).cxx_destruct;
- (_Bool)adjustOddEvenCounts:(_Bool)arg1 numModules:(int)arg2;
- (id)parseFoundFinderPattern:(id)arg1 rowNumber:(int)arg2 right:(_Bool)arg3 startEnd:(id)arg4;
- (id)findFinderPattern:(id)arg1 rowOffset:(int)arg2 rightFinderPattern:(_Bool)arg3;
- (id)decodeDataCharacter:(id)arg1 pattern:(id)arg2 outsideChar:(_Bool)arg3;
- (id)decodePair:(id)arg1 right:(_Bool)arg2 rowNumber:(int)arg3 hints:(id)arg4;
- (_Bool)checkChecksum:(id)arg1 rightPair:(id)arg2;
- (id)constructResult:(id)arg1 rightPair:(id)arg2;
- (void)reset;
- (void)addOrTally:(id)arg1 pair:(id)arg2;
- (id)decodeRow:(int)arg1 row:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (id)init;

@end
