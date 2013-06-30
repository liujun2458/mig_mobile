//
//  HomeViewController.h
//  miglab_mobile
//
//  Created by apple on 13-6-27.
//  Copyright (c) 2013年 pig. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PAAMusicPlayer.h"

@interface HomeViewController : UIViewController

@property (nonatomic, retain) PAAMusicPlayer *aaMusicPlayer;

-(IBAction)doPlay:(id)sender;

-(IBAction)doStart:(id)sender;
-(IBAction)doPause:(id)sender;
-(IBAction)doResume:(id)sender;

@end
