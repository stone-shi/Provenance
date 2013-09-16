//
//  PVGameLibraryViewController.h
//  Provenance
//
//  Created by James Addyman on 07/04/2013.
//  Copyright (c) 2013 JamSoft. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *PVGameLibraryHeaderView;

@interface PVGameLibraryViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout,
															UITextFieldDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@end
