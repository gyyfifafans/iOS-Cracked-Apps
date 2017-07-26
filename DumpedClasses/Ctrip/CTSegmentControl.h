//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, UIColor, UIFont, UIImage;

@interface CTSegmentControl : UIControl
{
    _Bool showIndicator;
    int _indicatorPosition;
    NSMutableArray *segmentArray;
    unsigned long long numberOfSegments;
    unsigned long long selectedSegmentIndex;
    UIImage *normalImageLeft;
    UIImage *normalImageMiddle;
    UIImage *normalImageRight;
    UIImage *selectedImageLeft;
    UIImage *selectedImageMiddle;
    UIImage *selectedImageRight;
    UIFont *font;
    double _gapValue;
    double _cornerRadius;
    UIColor *_titleColor;
    UIColor *_selectedColor;
}

@property(nonatomic) int indicatorPosition; // @synthesize indicatorPosition=_indicatorPosition;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double gapValue; // @synthesize gapValue=_gapValue;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator;
@property(retain, nonatomic) UIFont *font; // @synthesize font;
@property(retain, nonatomic) UIImage *selectedImageRight; // @synthesize selectedImageRight;
@property(retain, nonatomic) UIImage *selectedImageMiddle; // @synthesize selectedImageMiddle;
@property(retain, nonatomic) UIImage *selectedImageLeft; // @synthesize selectedImageLeft;
@property(retain, nonatomic) UIImage *normalImageRight; // @synthesize normalImageRight;
@property(retain, nonatomic) UIImage *normalImageMiddle; // @synthesize normalImageMiddle;
@property(retain, nonatomic) UIImage *normalImageLeft; // @synthesize normalImageLeft;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments;
@property(retain, nonatomic) NSMutableArray *segmentArray; // @synthesize segmentArray;
- (void).cxx_destruct;
- (void)deselectAllSegments;
- (void)segmentTapped:(id)arg1;
- (void)updateUI;
- (void)resetSegments;
- (void)replaceSegmentObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSegmentWithObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllSegments;
- (void)removeSegmentAtIndex:(unsigned long long)arg1;
- (void)replaceSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSegmentWithTitles:(id)arg1;
- (void)addSegmentWithTitle:(id)arg1;
- (void)removeSegmentWithButton:(id)arg1;
- (void)replaceSegmentButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSegmentButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSegmentButtons:(id)arg1;
- (void)addSegmentButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
