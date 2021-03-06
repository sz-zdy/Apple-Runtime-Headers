//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>
{
    unsigned long long _sourceType;
    id <PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
    NSArray *_contentGadgets;
}

+ (id)new;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contentGadgets; // @synthesize contentGadgets=_contentGadgets;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate; // @synthesize gadgetDelegate=_gadgetDelegate;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)resetPriorityDate;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithSourceType:(unsigned long long)arg1;
- (id)init;

@end

