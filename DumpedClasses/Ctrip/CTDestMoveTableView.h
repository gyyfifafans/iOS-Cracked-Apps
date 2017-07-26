//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, NSTimer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface CTDestMoveTableView : UITableView <UIGestureRecognizerDelegate>
{
    NSIndexPath *_movingIndexPath;
    NSIndexPath *_initialIndexPathForMovingRow;
    UIView *_snapshotOfMovingCell;
    UILongPressGestureRecognizer *_movingGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSTimer *_autoscrollTimer;
    long long _autoscrollDistance;
    long long _autoscrollThreshold;
    struct CGPoint _touchOffset;
}

@property(nonatomic) long long autoscrollThreshold; // @synthesize autoscrollThreshold=_autoscrollThreshold;
@property(nonatomic) long long autoscrollDistance; // @synthesize autoscrollDistance=_autoscrollDistance;
@property(retain, nonatomic) NSTimer *autoscrollTimer; // @synthesize autoscrollTimer=_autoscrollTimer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *movingGestureRecognizer; // @synthesize movingGestureRecognizer=_movingGestureRecognizer;
@property(retain, nonatomic) UIView *snapshotOfMovingCell; // @synthesize snapshotOfMovingCell=_snapshotOfMovingCell;
@property(nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(retain, nonatomic) NSIndexPath *initialIndexPathForMovingRow; // @synthesize initialIndexPathForMovingRow=_initialIndexPathForMovingRow;
@property(retain, nonatomic) NSIndexPath *movingIndexPath; // @synthesize movingIndexPath=_movingIndexPath;
- (void).cxx_destruct;
- (_Bool)canScroll;
- (_Bool)isAutoscrolling;
- (void)stopAutoscrolling;
- (void)legalizeAutoscrollDistance;
- (void)autoscrollTimerFired:(id)arg1;
- (double)autoscrollDistanceForProximityToEdge:(double)arg1;
- (void)determineAutoscrollDistanceForSnapShot;
- (void)maybeAutoscroll;
- (void)prepareAutoscrollForSnapshot;
- (void)resetSnapshot;
- (_Bool)moveSnapshotToLocation:(struct CGPoint)arg1;
- (id)snapshotFromRowAtMovingIndexPath;
- (id)adaptedIndexPathForRowAtIndexPath:(id)arg1;
- (_Bool)isValidIndexPath:(id)arg1;
- (_Bool)indexPathIsMovingIndexPath:(id)arg1;
- (_Bool)canMoveToIndexPath:(id)arg1;
- (void)moveRowToLocation:(struct CGPoint)arg1;
- (void)resetMovingRow;
- (void)cancelMovingRowIfNeeded;
- (void)moveingInTableView;
- (void)finishMovingRow;
- (void)prepareForMovingRowAtTouchPoint:(struct CGPoint)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleTapPress:(id)arg1;
- (id)findFirstResponderBeneathView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)prepareGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic) __weak id <CTDestMoveTableViewDataSource> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CTDestMoveTableViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
