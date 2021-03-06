//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXCollectionViewCell.h>

#import <PhotoPrintProduct/NSAccessibilityGroup-Protocol.h>

@class KHBookProductDetailsView, NSArray, NSButton, NSDictionary, NSImageView, NSString, NSTextField;
@protocol KHProductViewDelegate;

@interface KHBookProductViewCell : UXCollectionViewCell <NSAccessibilityGroup>
{
    NSTextField *_productTitleLabel;
    NSTextField *_productDescriptionLabel;
    NSImageView *_productImageView;
    KHBookProductDetailsView *_bookDetailsLeft;
    KHBookProductDetailsView *_bookDetailsRight;
    NSButton *_learnMoreButton;
    id <KHProductViewDelegate> _delegate;
    NSArray *_products;
    NSDictionary *_bookDetailsViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *bookDetailsViews; // @synthesize bookDetailsViews=_bookDetailsViews;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) __weak id <KHProductViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property __weak KHBookProductDetailsView *bookDetailsRight; // @synthesize bookDetailsRight=_bookDetailsRight;
@property __weak KHBookProductDetailsView *bookDetailsLeft; // @synthesize bookDetailsLeft=_bookDetailsLeft;
@property __weak NSImageView *productImageView; // @synthesize productImageView=_productImageView;
@property __weak NSTextField *productDescriptionLabel; // @synthesize productDescriptionLabel=_productDescriptionLabel;
@property __weak NSTextField *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
- (void)productButtonHit:(id)arg1;
- (void)hidePrices;
- (void)showPricesWithProducts:(id)arg1;
- (void)_showPricesLabel:(BOOL)arg1 inDetailsView:(id)arg2 animated:(BOOL)arg3;
- (void)loadWithProducts:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

