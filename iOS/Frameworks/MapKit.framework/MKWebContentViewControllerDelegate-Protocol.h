//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKWebContentViewController;

@protocol MKWebContentViewControllerDelegate <NSObject>
- (void)removeWebContentViewController:(MKWebContentViewController *)arg1;
- (void)webContentViewController:(MKWebContentViewController *)arg1 performHeightChangeWithBlock:(void (^)(void))arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)webContentViewControllerDidStopLoading:(MKWebContentViewController *)arg1;
- (_Bool)isWebContentViewControllerParentPlacecardLoading:(MKWebContentViewController *)arg1;
@end

