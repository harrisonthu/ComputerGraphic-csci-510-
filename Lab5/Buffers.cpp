





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://assets-cdn.github.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-77c3b874f32e71b14cded5a120f42f5c7288fa52e0a37f2d5919fbd8bcfca63c.css" integrity="sha256-d8O4dPMucbFM3tWhIPQvXHKI+lLgo38tWRn72Lz8pjw=" media="all" rel="stylesheet" />
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-e626c2fd4040fa472aaa871cfd685a7c29c75fb1524eba3d093b56caa0d38164.css" integrity="sha256-5ibC/UBA+kcqqocc/WhafCnHX7FSTro9CTtWyqDTgWQ=" media="all" rel="stylesheet" />
  
  
  
  

  <meta name="viewport" content="width=device-width">
  
  <title>ComputerGraphic-csci-510-/Buffers.cpp at master · harrisonthu/ComputerGraphic-csci-510-</title>
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta content="https://avatars3.githubusercontent.com/u/7545692?v=4&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="harrisonthu/ComputerGraphic-csci-510-" property="og:title" /><meta content="https://github.com/harrisonthu/ComputerGraphic-csci-510-" property="og:url" /><meta content="ComputerGraphic-csci-510- - Lab assignments for Computer Graphics class (csci-510) (Spring 2017)" property="og:description" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6MTk5NTUzMDk1OjIzYjk2MjRjMmVlMzQyMjk4ZDU3ZmZlNTkwNGExODExMDI3Y2M1NjQ1ZjQxZTE1NzliMTNlOGQ0MTBlYjlhZGM=--52e4887b9fe3319258c40027ad4b79cb1e34b876">
  <meta name="pjax-timeout" content="1000">
  <link rel="sudo-modal" href="/sessions/sudo_modal">
  <meta name="request-id" content="C352:670A:7AD3C0:D28682:599C5D4C" data-pjax-transient>
  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="https://collector.githubapp.com/github-external/browser_event" name="octolytics-event-url" /><meta content="C352:670A:7AD3C0:D28682:599C5D4C" name="octolytics-dimension-request_id" /><meta content="iad" name="octolytics-dimension-region_edge" /><meta content="iad" name="octolytics-dimension-region_render" /><meta content="7545692" name="octolytics-actor-id" /><meta content="harrisonthu" name="octolytics-actor-login" /><meta content="311f84ea9055bd8289e7ecda3073aa0342ddc3f80a1e26e03a81853779b379ab" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />




  <meta class="js-ga-set" name="dimension1" content="Logged In">


  

      <meta name="hostname" content="github.com">
  <meta name="user-login" content="harrisonthu">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="MjViYmEwYTMwMDM2YzhhMDFmOWU3MjQ2MTU3NDFhMzA1ZTk4ZjdkZWQ4YmY0NTU5OThkOTJiZTU3YTI5M2U1YXx7InJlbW90ZV9hZGRyZXNzIjoiMTI5LjIxLjE3OS4yMzkiLCJyZXF1ZXN0X2lkIjoiQzM1Mjo2NzBBOjdBRDNDMDpEMjg2ODI6NTk5QzVENEMiLCJ0aW1lc3RhbXAiOjE1MDM0MTk3MjgsImhvc3QiOiJnaXRodWIuY29tIn0=">

    <meta name="enabled-features" content="UNIVERSE_BANNER">

  <meta name="html-safe-nonce" content="50c4762c6d6528ba101c53ac13386975f3c32c4f">

  <meta http-equiv="x-pjax-version" content="b5cf42dc1448a66e8ccf9fe29520d026">
  

      <link href="https://github.com/harrisonthu/ComputerGraphic-csci-510-/commits/master.atom" rel="alternate" title="Recent Commits to ComputerGraphic-csci-510-:master" type="application/atom+xml">

  <meta name="description" content="ComputerGraphic-csci-510- - Lab assignments for Computer Graphics class (csci-510) (Spring 2017)">
  <meta name="go-import" content="github.com/harrisonthu/ComputerGraphic-csci-510- git https://github.com/harrisonthu/ComputerGraphic-csci-510-.git">

  <meta content="7545692" name="octolytics-dimension-user_id" /><meta content="harrisonthu" name="octolytics-dimension-user_login" /><meta content="87033851" name="octolytics-dimension-repository_id" /><meta content="harrisonthu/ComputerGraphic-csci-510-" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="87033851" name="octolytics-dimension-repository_network_root_id" /><meta content="harrisonthu/ComputerGraphic-csci-510-" name="octolytics-dimension-repository_network_root_nwo" /><meta content="true" name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" />


    <link rel="canonical" href="https://github.com/harrisonthu/ComputerGraphic-csci-510-/blob/master/Lab5/Buffers.cpp" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">


  <meta name="u2f-support" content="true">

  </head>

  <body class="logged-in env-production page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="bg-black text-white p-3 show-on-focus js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<div class="header" role="banner">
  <div class="container-lg px-3 clearfix">
    <div class="d-flex flex-justify-between">
      <div class="d-flex">
        <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>


            <div class="mr-2">
              <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/harrisonthu/ComputerGraphic-csci-510-/search" class="js-site-search-form" data-scoped-search-url="/harrisonthu/ComputerGraphic-csci-510-/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
        <a href="/harrisonthu/ComputerGraphic-csci-510-/blob/master/Lab5/Buffers.cpp" class="header-search-scope no-underline">This repository</a>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        value=""
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
        <input type="hidden" class="js-site-search-type-field" name="type" >
    </label>
</form></div>

            </div>

          <ul class="d-flex list-style-none" role="navigation">
            <li>
              <a href="/pulls" aria-label="Pull requests you created" class="js-selected-navigation-item header-navlink" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
                Pull requests
</a>            </li>
            <li>
              <a href="/issues" aria-label="Issues you created" class="js-selected-navigation-item header-navlink" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
                Issues
</a>            </li>
                <li>
                  <a href="/marketplace" class="js-selected-navigation-item header-navlink" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-selected-links=" /marketplace">
                    Marketplace
</a>                </li>
              <li>
                <a class="header-navlink" href="https://gist.github.com/" data-ga-click="Header, go to gist, text:gist">Gist</a>
              </li>
          </ul>
      </div>

      <div class="d-flex">
        
<ul class="d-flex user-nav list-style-none" id="user-links">
  <li class="dropdown js-menu-container">
    
      <a href="/notifications" aria-label="You have no unread notifications" class="header-navlink notification-indicator tooltipped tooltipped-s js-socket-channel js-notification-indicator" data-channel="notification-changed:7545692" data-ga-click="Header, go to notifications, icon:read" data-hotkey="g n">
          <span class="mail-status "></span>
          <svg aria-hidden="true" class="octicon octicon-bell" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"/></svg>
</a>
  </li>

  <li class="dropdown js-menu-container">
    <a class="header-navlink tooltipped tooltipped-s js-menu-target" href="/new"
       aria-label="Create new…"
       aria-expanded="false"
       aria-haspopup="true"
       data-ga-click="Header, create new, icon:add">
      <svg aria-hidden="true" class="octicon octicon-plus float-left" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"/></svg>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>



  <div class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="harrisonthu/ComputerGraphic-csci-510-">This repository</span>
  </div>
    <a class="dropdown-item" href="/harrisonthu/ComputerGraphic-csci-510-/issues/new" data-ga-click="Header, create new issue">
      New issue
    </a>

      </ul>
    </div>
  </li>

  <li class="dropdown js-menu-container">
    <a class="header-navlink name tooltipped tooltipped-sw js-menu-target" href="/harrisonthu"
       aria-label="View profile and more"
       aria-expanded="false"
       aria-haspopup="true"
       data-ga-click="Header, show menu, icon:avatar">
      <img alt="@harrisonthu" class="avatar" src="https://avatars1.githubusercontent.com/u/7545692?v=4&amp;s=40" height="20" width="20">
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <div class="dropdown-menu dropdown-menu-sw">
        <div class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">harrisonthu</strong>
        </div>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/harrisonthu" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a>
        <a class="dropdown-item" href="/harrisonthu?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a>
        <a class="dropdown-item" href="/explore" data-ga-click="Header, go to explore, text:explore">
          Explore
        </a>
        <a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="zadCTPqwQlKAeGOsEMSjkmAEoDCjlPF/I1ThpePKaAcxmN1mdIn0sPHmM7a/0N2SVh3rJ/QHFBuGSubEQMoiNg==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </li>
</ul>


        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="sr-only right-0" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="u1qNragcHGxtCp3DV8WJH2Go2hVdNr3giI0/z1QRybRHZRKHJiWqjhyUzdn40fcfV7GRAgqlWIQtkziu9xGDhQ==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </div>
</div>


      

  </div>

  <div id="start-of-content" class="show-on-focus"></div>

    <div id="js-flash-container">
</div>



  <div role="main">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
      





    <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
      <div class="container repohead-details-container">

        <ul class="pagehead-actions">
  <li>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="9Fo9WO9s4GWBaIi0rubvdEU8v3pbGIytM7t+GRoGVzbyrgYwvnHCpA1nR9Z0LcL6LLg+jAmKaTMO29FasvrgWg==" /></div>      <input class="form-control" id="repository_id" name="repository_id" type="hidden" value="87033851" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/harrisonthu/ComputerGraphic-csci-510-/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target"
            role="button"
            aria-haspopup="true"
            aria-expanded="false"
            aria-label="Toggle repository notifications menu"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
                <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                Unwatch
            </span>
          </a>
            <a class="social-count js-social-count"
              href="/harrisonthu/ComputerGraphic-csci-510-/watchers"
              aria-label="1 user is watching this repository">
              1
            </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                        Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-mute" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                        Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/harrisonthu/ComputerGraphic-csci-510-/unstar" class="starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="NK0z6VVO/Rg3kGyoqwXYBP1BQNDkDcg/IWDYZrRY5aNPVLIl//2DQTp2MMst/Ox5PcWfd6/TPpxoxuFJ9D9nvg==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar harrisonthu/ComputerGraphic-csci-510-"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/harrisonthu/ComputerGraphic-csci-510-/stargazers"
           aria-label="0 users starred this repository">
          0
        </a>
</form>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/harrisonthu/ComputerGraphic-csci-510-/star" class="unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="1cl7/q5umq+BC+fb9eR/kK6i9+M1qoRwW2vxF58gLr9oMyINAUOMsjSPRGx4sNKTVfZidA4WZ6G9vEH33ZCr+Q==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star harrisonthu/ComputerGraphic-csci-510-"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/harrisonthu/ComputerGraphic-csci-510-/stargazers"
           aria-label="0 users starred this repository">
          0
        </a>
</form>  </div>

  </li>

  <li>
          <a href="#fork-destination-box" class="btn btn-sm btn-with-count"
              title="Fork your own copy of harrisonthu/ComputerGraphic-csci-510- to your account"
              aria-label="Fork your own copy of harrisonthu/ComputerGraphic-csci-510- to your account"
              rel="facebox"
              data-ga-click="Repository, show fork modal, action:blob#show; text:Fork">
              <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            Fork
          </a>

          <div id="fork-destination-box" style="display: none;">
            <h2 class="facebox-header" data-facebox-id="facebox-header">Where should we fork this repository?</h2>
            <include-fragment src=""
                class="js-fork-select-fragment fork-select-fragment"
                data-url="/harrisonthu/ComputerGraphic-csci-510-/fork?fragment=1">
              <img alt="Loading" height="64" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-128.gif" width="64" />
            </include-fragment>
          </div>

    <a href="/harrisonthu/ComputerGraphic-csci-510-/network" class="social-count"
       aria-label="0 users forked this repository">
      0
    </a>
  </li>
</ul>

        <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a href="/harrisonthu" class="url fn" rel="author">harrisonthu</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/harrisonthu/ComputerGraphic-csci-510-" data-pjax="#js-repo-pjax-container">ComputerGraphic-csci-510-</a></strong>

</h1>

      </div>
      <div class="container">
        
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/harrisonthu/ComputerGraphic-csci-510-" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /harrisonthu/ComputerGraphic-csci-510-" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a href="/harrisonthu/ComputerGraphic-csci-510-/issues" class="js-selected-navigation-item reponav-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /harrisonthu/ComputerGraphic-csci-510-/issues" itemprop="url">
        <svg aria-hidden="true" class="octicon octicon-issue-opened" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"/></svg>
        <span itemprop="name">Issues</span>
        <span class="Counter">0</span>
        <meta itemprop="position" content="2">
</a>    </span>

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/harrisonthu/ComputerGraphic-csci-510-/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /harrisonthu/ComputerGraphic-csci-510-/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="Counter">0</span>
      <meta itemprop="position" content="3">
</a>  </span>

    <a href="/harrisonthu/ComputerGraphic-csci-510-/projects" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /harrisonthu/ComputerGraphic-csci-510-/projects">
      <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
      Projects
      <span class="Counter" >0</span>
</a>
    <a href="/harrisonthu/ComputerGraphic-csci-510-/wiki" class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /harrisonthu/ComputerGraphic-csci-510-/wiki">
      <svg aria-hidden="true" class="octicon octicon-book" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"/></svg>
      Wiki
</a>
      <a href="/harrisonthu/ComputerGraphic-csci-510-/settings" class="js-selected-navigation-item reponav-item" data-selected-links="repo_settings repo_branch_settings hooks integration_installations /harrisonthu/ComputerGraphic-csci-510-/settings">
        <svg aria-hidden="true" class="octicon octicon-gear" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"/></svg>
        Settings
</a>
    <div class="reponav-dropdown js-menu-container">
      <button type="button" class="btn-link reponav-item reponav-dropdown js-menu-target " data-no-toggle aria-expanded="false" aria-haspopup="true">
        Insights
        <svg aria-hidden="true" class="octicon octicon-triangle-down v-align-middle text-gray" height="11" version="1.1" viewBox="0 0 12 16" width="8"><path fill-rule="evenodd" d="M0 5l6 6 6-6z"/></svg>
      </button>
      <div class="dropdown-menu-content js-menu-content">
        <div class="dropdown-menu dropdown-menu-sw">
            <a class="dropdown-item" href="/harrisonthu/ComputerGraphic-csci-510-/community" data-skip-pjax>
              <svg aria-hidden="true" class="octicon octicon-heart" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11.2 3c-.52-.63-1.25-.95-2.2-1-.97 0-1.69.42-2.2 1-.51.58-.78.92-.8 1-.02-.08-.28-.42-.8-1-.52-.58-1.17-1-2.2-1-.95.05-1.69.38-2.2 1-.52.61-.78 1.28-.8 2 0 .52.09 1.52.67 2.67C1.25 8.82 3.01 10.61 6 13c2.98-2.39 4.77-4.17 5.34-5.33C11.91 6.51 12 5.5 12 5c-.02-.72-.28-1.39-.8-2.02V3z"/></svg>
              <span itemprop="name">Community</span>
            </a>
          <a class="dropdown-item" href="/harrisonthu/ComputerGraphic-csci-510-/pulse" data-skip-pjax>
            <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"/></svg>
            Pulse
          </a>
          <a class="dropdown-item" href="/harrisonthu/ComputerGraphic-csci-510-/graphs" data-skip-pjax>
            <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
            Graphs
          </a>
        </div>
      </div>
    </div>
</nav>

      </div>
    </div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    
  <a href="/harrisonthu/ComputerGraphic-csci-510-/blob/4f9ee463e56d191fb03d00ad2177d61bacd202a0/Lab5/Buffers.cpp" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

  <!-- blob contrib key: blob_contributors:v21:21ca85e45cd883c67b2bbeee0ec3efd7 -->

  <div class="file-navigation js-zeroclipboard-container">
    
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" aria-expanded="false" aria-haspopup="true">
      <i>Branch:</i>
      <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Find or create a branch…" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/harrisonthu/ComputerGraphic-csci-510-/blob/master/Lab5/Buffers.cpp"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
        </div>

          <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/harrisonthu/ComputerGraphic-csci-510-/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="Xl4HE2ydfWSIQq6pOGF/tJoqMP3u5ESPzRgsD2Wa7tJVYn7JIqdfXt88yTP9m5eeX4N5aLLT+upyBfDAF0M5OQ==" /></div>
          <svg aria-hidden="true" class="octicon octicon-git-branch select-menu-item-icon" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M10 5c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v.3c-.02.52-.23.98-.63 1.38-.4.4-.86.61-1.38.63-.83.02-1.48.16-2 .45V4.72a1.993 1.993 0 0 0-1-3.72C.88 1 0 1.89 0 3a2 2 0 0 0 1 1.72v6.56c-.59.35-1 .99-1 1.72 0 1.11.89 2 2 2 1.11 0 2-.89 2-2 0-.53-.2-1-.53-1.36.09-.06.48-.41.59-.47.25-.11.56-.17.94-.17 1.05-.05 1.95-.45 2.75-1.25S8.95 7.77 9 6.73h-.02C9.59 6.37 10 5.73 10 5zM2 1.8c.66 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2C1.35 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2zm0 12.41c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm6-8c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            <div class="select-menu-item-text">
              <span class="select-menu-item-heading">Create branch: <span class="js-new-item-name"></span></span>
              <span class="description">from ‘master’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="master">
            <input type="hidden" name="path" id="path" value="Lab5/Buffers.cpp">
</form>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

    <div class="BtnGroup float-right">
      <a href="/harrisonthu/ComputerGraphic-csci-510-/find/master"
            class="js-pjax-capture-input btn btn-sm BtnGroup-item"
            data-pjax
            data-hotkey="t">
        Find file
      </a>
      <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
    </div>
    <div class="breadcrumb js-zeroclipboard-target">
      <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/harrisonthu/ComputerGraphic-csci-510-"><span>ComputerGraphic-csci-510-</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/harrisonthu/ComputerGraphic-csci-510-/tree/master/Lab5"><span>Lab5</span></a></span><span class="separator">/</span><strong class="final-path">Buffers.cpp</strong>
    </div>
  </div>


  
  <div class="commit-tease">
      <span class="float-right">
        <a class="commit-tease-sha" href="/harrisonthu/ComputerGraphic-csci-510-/commit/d36440c668e35201ac059400f940409ace052659" data-pjax>
          d36440c
        </a>
        <relative-time datetime="2017-07-17T19:35:49Z">Jul 17, 2017</relative-time>
      </span>
      <div>
        <img alt="@harrisonthu" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/7545692?v=4&amp;s=40" width="20" />
        <a href="/harrisonthu" class="user-mention" rel="author">harrisonthu</a>
          <a href="/harrisonthu/ComputerGraphic-csci-510-/commit/d36440c668e35201ac059400f940409ace052659" class="message" data-pjax="true" title="Add files via upload">Add files via upload</a>
      </div>

    <div class="commit-tease-contributors">
      <button type="button" class="btn-link muted-link contributors-toggle" data-facebox="#blob_contributors_box">
        <strong>1</strong>
         contributor
      </button>
      
    </div>

    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header" data-facebox-id="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list" data-facebox-id="facebox-description">
          <li class="facebox-user-list-item">
            <img alt="@harrisonthu" height="24" src="https://avatars3.githubusercontent.com/u/7545692?v=4&amp;s=48" width="24" />
            <a href="/harrisonthu">harrisonthu</a>
          </li>
      </ul>
    </div>
  </div>

  <div class="file">
    <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/harrisonthu/ComputerGraphic-csci-510-/raw/master/Lab5/Buffers.cpp" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/harrisonthu/ComputerGraphic-csci-510-/blame/master/Lab5/Buffers.cpp" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/harrisonthu/ComputerGraphic-csci-510-/commits/master/Lab5/Buffers.cpp" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           href="github-windows://openRepo/https://github.com/harrisonthu/ComputerGraphic-csci-510-?branch=master&amp;filepath=Lab5%2FBuffers.cpp"
           aria-label="Open this file in GitHub Desktop"
           data-ga-click="Repository, open with desktop, type:windows">
            <svg aria-hidden="true" class="octicon octicon-device-desktop" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/harrisonthu/ComputerGraphic-csci-510-/edit/master/Lab5/Buffers.cpp" class="inline-form js-update-url-with-hash" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="r55HESp+GMwveDwbBI+rFU9jGivOmHXWv/qhUUiPrY/gb5mvlRpOeXjV2PMTQH6swe1nVdd57rbcxILt+10eBg==" /></div>
          <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
            aria-label="Edit this file" data-hotkey="e" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
          </button>
</form>        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/harrisonthu/ComputerGraphic-csci-510-/delete/master/Lab5/Buffers.cpp" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="4j5IsIoGBGHEHapndP1ofrtAGJTrerLrOHkqTlWfWmAbmFnZOQhinZJ67bocPnAM0QF3UniZnbtvH2YMi16lIQ==" /></div>
          <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
            aria-label="Delete this file" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
          </button>
</form>  </div>

  <div class="file-info">
      1377 lines (1191 sloc)
      <span class="file-info-divider"></span>
    85.2 KB
  </div>
</div>

    

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line">&lt;!DOCTYPE html&gt;</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line">&lt;html lang=<span class="pl-s"><span class="pl-pds">&quot;</span>en<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">  &lt;head&gt;</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line">    &lt;meta charset=<span class="pl-s"><span class="pl-pds">&quot;</span>utf-8<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://avatars0.githubusercontent.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://avatars1.githubusercontent.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://avatars2.githubusercontent.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://avatars3.githubusercontent.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://github-cloud.s3.amazonaws.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>dns-prefetch<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://user-images.githubusercontent.com/<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">  &lt;link crossorigin=<span class="pl-s"><span class="pl-pds">&quot;</span>anonymous<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/assets/frameworks-2d2d4c150f7000385741c6b992b302689ecd172246c6428904e0813be9bceca6.css<span class="pl-pds">&quot;</span></span> integrity=<span class="pl-s"><span class="pl-pds">&quot;</span>sha256-LS1MFQ9wADhXQca5krMCaJ7NFyJGxkKJBOCBO+m87KY=<span class="pl-pds">&quot;</span></span> media=<span class="pl-s"><span class="pl-pds">&quot;</span>all<span class="pl-pds">&quot;</span></span> rel=<span class="pl-s"><span class="pl-pds">&quot;</span>stylesheet<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">  &lt;link crossorigin=<span class="pl-s"><span class="pl-pds">&quot;</span>anonymous<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/assets/github-0522ae8d3b3bdc841d2f91f90efd5f1fd9040d910905674cd134ced43a6dfea6.css<span class="pl-pds">&quot;</span></span> integrity=<span class="pl-s"><span class="pl-pds">&quot;</span>sha256-BSKujTs73IQdL5H5Dv1fH9kEDZEJBWdM0TTO1Dpt/qY=<span class="pl-pds">&quot;</span></span> media=<span class="pl-s"><span class="pl-pds">&quot;</span>all<span class="pl-pds">&quot;</span></span> rel=<span class="pl-s"><span class="pl-pds">&quot;</span>stylesheet<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>viewport<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>width=device-width<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">  &lt;title&gt;ComputerGraphic-csci-<span class="pl-c1">510</span>-/Buffers.cpp at master · harrisonthu/ComputerGraphic-csci-<span class="pl-c1">510</span>-&lt;/title&gt;</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>search<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>application/opensearchdescription+xml<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>/opensearch.xml<span class="pl-pds">&quot;</span></span> title=<span class="pl-s"><span class="pl-pds">&quot;</span>GitHub<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>fluid-icon<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://github.com/fluidicon.png<span class="pl-pds">&quot;</span></span> title=<span class="pl-s"><span class="pl-pds">&quot;</span>GitHub<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">  &lt;meta property=<span class="pl-s"><span class="pl-pds">&quot;</span>fb:app_id<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>1401488693436528<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">    &lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>https://avatars3.githubusercontent.com/u/7545692?v=4&amp;amp;s=400<span class="pl-pds">&quot;</span></span> property=<span class="pl-s"><span class="pl-pds">&quot;</span>og:image<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>GitHub<span class="pl-pds">&quot;</span></span> property=<span class="pl-s"><span class="pl-pds">&quot;</span>og:site_name<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>object<span class="pl-pds">&quot;</span></span> property=<span class="pl-s"><span class="pl-pds">&quot;</span>og:type<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> property=<span class="pl-s"><span class="pl-pds">&quot;</span>og:title<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>https://github.com/harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> property=<span class="pl-s"><span class="pl-pds">&quot;</span>og:url<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>ComputerGraphic-csci-510- - Lab assignments for Computer Graphics class (csci-510) (Spring 2017)<span class="pl-pds">&quot;</span></span> property=<span class="pl-s"><span class="pl-pds">&quot;</span>og:description<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>assets<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>web-socket<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>wss://live.github.com/_sockets/VjI6MTg5Mjg3Nzg5OmEwODlmOGY2ZWE2M2Q1NTg0NGNlMGU5ZDUyZDE0OWZhM2RmYzU0NTk4ODQ4YzUyZTAzMGZmZmVhZDJhNWRmZmY=--6e5b9d2b1ff2f97e1a17bf2d62e3c83182e43d49<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>pjax-timeout<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>1000<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>sudo-modal<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>/sessions/sudo_modal<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>request-id<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>EA69:6227:1E32717:32BC8B5:596D116E<span class="pl-pds">&quot;</span></span> data-pjax-transient&gt;</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>selected-link<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_source<span class="pl-pds">&quot;</span></span> data-pjax-transient&gt;</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>google-site-verification<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">&lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>google-site-verification<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">    &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>google-analytics<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>UA-3769691-2<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>collector.githubapp.com<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-host<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>github<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-app-id<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>https://collector.githubapp.com/github-external/browser_event<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-event-url<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>EA69:6227:1E32717:32BC8B5:596D116E<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-request_id<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>iad<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-region_edge<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>iad<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-region_render<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>7545692<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-actor-id<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>harrisonthu<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-actor-login<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>311f84ea9055bd8289e7ecda3073aa0342ddc3f80a1e26e03a81853779b379ab<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-actor-hash<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>/&amp;lt;user-name&amp;gt;/&amp;lt;repo-name&amp;gt;/blob/show<span class="pl-pds">&quot;</span></span> data-pjax-transient=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>analytics-location<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">  &lt;meta <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-ga-set<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>dimension1<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>Logged In<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">      &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>hostname<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>github.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>user-login<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>harrisonthu<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">      &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>expected-hostname<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>github.com<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">    &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>js-proxy-site-detection-payload<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>NjI0ODAwMzkyNGU0ZmFiZTJiODQwNDVjYzExMjA1NTAyNDEzNzk5ZDYxY2EyNDZkZWM4NTZhZTBlYTczNzUwMnx7InJlbW90ZV9hZGRyZXNzIjoiMTI5LjIxLjE3OS4yMzkiLCJyZXF1ZXN0X2lkIjoiRUE2OTo2MjI3OjFFMzI3MTc6MzJCQzhCNTo1OTZEMTE2RSIsInRpbWVzdGFtcCI6MTUwMDMyMDEyMCwiaG9zdCI6ImdpdGh1Yi5jb20ifQ==<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>html-safe-nonce<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>092a4e8dfb068c57e0d9d1e682d0a37f85333df1<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">  &lt;meta http-equiv=<span class="pl-s"><span class="pl-pds">&quot;</span>x-pjax-version<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>31dcf174670c126c404efb512f95c588<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">  </td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">      &lt;link href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://github.com/harrisonthu/ComputerGraphic-csci-510-/commits/master.atom<span class="pl-pds">&quot;</span></span> rel=<span class="pl-s"><span class="pl-pds">&quot;</span>alternate<span class="pl-pds">&quot;</span></span> title=<span class="pl-s"><span class="pl-pds">&quot;</span>Recent Commits to ComputerGraphic-csci-510-:master<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>application/atom+xml<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>description<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>ComputerGraphic-csci-510- - Lab assignments for Computer Graphics class (csci-510) (Spring 2017)<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>go-import<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>github.com/harrisonthu/ComputerGraphic-csci-510- git https://github.com/harrisonthu/ComputerGraphic-csci-510-.git<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">  &lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>7545692<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-user_id<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>harrisonthu<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-user_login<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>87033851<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_id<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_nwo<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_public<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>false<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_is_fork<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>87033851<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_network_root_id<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_network_root_nwo<span class="pl-pds">&quot;</span></span> /&gt;&lt;meta content=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> name=<span class="pl-s"><span class="pl-pds">&quot;</span>octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">    &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>canonical<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://github.com/harrisonthu/ComputerGraphic-csci-510-/blob/master/Lab5/Buffers.cpp<span class="pl-pds">&quot;</span></span> data-pjax-transient&gt;</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>browser-stats-url<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>https://api.github.com/_private/browser/stats<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>browser-errors-url<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>https://api.github.com/_private/browser/errors<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>mask-icon<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/pinned-octocat.svg<span class="pl-pds">&quot;</span></span> color=<span class="pl-s"><span class="pl-pds">&quot;</span>#000000<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">  &lt;link rel=<span class="pl-s"><span class="pl-pds">&quot;</span>icon<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>image/x-icon<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/favicon.ico<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">&lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>theme-color<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>#1e2327<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">  &lt;meta name=<span class="pl-s"><span class="pl-pds">&quot;</span>u2f-support<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">  &lt;/head&gt;</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">  &lt;body <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>logged-in env-production page-blob<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>position-relative js-header-wrapper <span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">    &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>#start-of-content<span class="pl-pds">&quot;</span></span> tabindex=<span class="pl-s"><span class="pl-pds">&quot;</span>1<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>bg-black text-white p-3 show-on-focus js-skip-to-content<span class="pl-pds">&quot;</span></span>&gt;Skip to content&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">    &lt;div id=<span class="pl-s"><span class="pl-pds">&quot;</span>js-pjax-loader-bar<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pjax-loader-bar<span class="pl-pds">&quot;</span></span>&gt;&lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>progress<span class="pl-pds">&quot;</span></span>&gt;&lt;/div&gt;&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">&lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>header<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>banner<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>container clearfix<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">    &lt;a <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>header-logo-invertocat<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>https://github.com/<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>g d<span class="pl-pds">&quot;</span></span> aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Homepage<span class="pl-pds">&quot;</span></span> data-ga-click=<span class="pl-s"><span class="pl-pds">&quot;</span>Header, go to dashboard, icon:logo<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">  &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-mark-github<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>32<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 16 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>32<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">        &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>header-search scoped-search site-scoped-search js-site-search<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>search<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">  &lt;!-- <span class="pl-s"><span class="pl-pds">&#39;</span>&quot;` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=&quot;UTF-8&quot; action=&quot;/harrisonthu/ComputerGraphic-csci-510-/search&quot; class=&quot;js-site-search-form&quot; data-scoped-search-url=&quot;/harrisonthu/ComputerGraphic-csci-510-/search&quot; data-unscoped-search-url=&quot;/search&quot; method=&quot;get&quot;&gt;&lt;div style=&quot;margin:0;padding:0;display:inline&quot;&gt;&lt;input name=&quot;utf8&quot; type=&quot;hidden&quot; value=&quot;&amp;#x2713;&quot; /&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;label class=&quot;form-control header-search-wrapper js-chromeless-input-container&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/blob/master/Lab5/Buffers.cpp&quot; class=&quot;header-search-scope no-underline&quot;&gt;This repository&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;input type=&quot;text&quot;</span></td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        class=&quot;form-control header-search-input js-site-search-focus js-site-search-field is-clearable&quot;</span></td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        data-hotkey=&quot;s&quot;</span></td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        name=&quot;q&quot;</span></td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        value=&quot;&quot;</span></td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        placeholder=&quot;Search&quot;</span></td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        aria-label=&quot;Search this repository&quot;</span></td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        data-unscoped-placeholder=&quot;Search GitHub&quot;</span></td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        data-scoped-placeholder=&quot;Search&quot;</span></td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        autocapitalize=&quot;off&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;input type=&quot;hidden&quot; class=&quot;js-site-search-type-field&quot; name=&quot;type&quot; &gt;</span></td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/label&gt;</span></td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;ul class=&quot;header-nav float-left&quot; role=&quot;navigation&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li class=&quot;header-nav-item&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;a href=&quot;/pulls&quot; aria-label=&quot;Pull requests you created&quot; class=&quot;js-selected-navigation-item header-nav-link&quot; data-ga-click=&quot;Header, click, Nav menu - item:pulls context:user&quot; data-hotkey=&quot;g p&quot; data-selected-links=&quot;/pulls /pulls/assigned /pulls/mentioned /pulls&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            Pull requests</span></td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;        &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li class=&quot;header-nav-item&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;a href=&quot;/issues&quot; aria-label=&quot;Issues you created&quot; class=&quot;js-selected-navigation-item header-nav-link&quot; data-ga-click=&quot;Header, click, Nav menu - item:issues context:user&quot; data-hotkey=&quot;g i&quot; data-selected-links=&quot;/issues /issues/assigned /issues/mentioned /issues&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            Issues</span></td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;        &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;li class=&quot;header-nav-item&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;a href=&quot;/marketplace&quot; class=&quot;js-selected-navigation-item header-nav-link&quot; data-ga-click=&quot;Header, click, Nav menu - item:marketplace context:user&quot; data-selected-links=&quot; /marketplace&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                Marketplace</span></td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;            &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;li class=&quot;header-nav-item&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;a class=&quot;header-nav-link&quot; href=&quot;https://gist.github.com/&quot; data-ga-click=&quot;Header, go to gist, text:gist&quot;&gt;Gist&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/ul&gt;</span></td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    </span></td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;ul class=&quot;header-nav user-nav float-right&quot; id=&quot;user-links&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;li class=&quot;header-nav-item&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    </span></td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;a href=&quot;/notifications&quot; aria-label=&quot;You have no unread notifications&quot; class=&quot;header-nav-link notification-indicator tooltipped tooltipped-s js-socket-channel js-notification-indicator &quot; data-channel=&quot;notification-changed:7545692&quot; data-ga-click=&quot;Header, go to notifications, icon:read&quot; data-hotkey=&quot;g n&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;span class=&quot;mail-status &quot;&gt;&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-bell float-left&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 14 16&quot; width=&quot;14&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;li class=&quot;header-nav-item dropdown js-menu-container&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;a class=&quot;header-nav-link tooltipped tooltipped-s js-menu-target&quot; href=&quot;/new&quot;</span></td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       aria-label=&quot;Create new…&quot;</span></td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       aria-expanded=&quot;false&quot;</span></td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       aria-haspopup=&quot;true&quot;</span></td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       data-ga-click=&quot;Header, create new, icon:add&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-plus float-left&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 12 16&quot; width=&quot;12&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M12 9H7v5H5V9H0V7h5V2h2v5h5z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;span class=&quot;dropdown-caret&quot;&gt;&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;dropdown-menu-content js-menu-content&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;ul class=&quot;dropdown-menu dropdown-menu-sw&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        </span></td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;a class=&quot;dropdown-item&quot; href=&quot;/new&quot; data-ga-click=&quot;Header, create new repository&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  New repository</span></td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;a class=&quot;dropdown-item&quot; href=&quot;/new/import&quot; data-ga-click=&quot;Header, import a repository&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    Import repository</span></td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;a class=&quot;dropdown-item&quot; href=&quot;https://gist.github.com/&quot; data-ga-click=&quot;Header, create new gist&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  New gist</span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;a class=&quot;dropdown-item&quot; href=&quot;/organizations/new&quot; data-ga-click=&quot;Header, create new organization&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    New organization</span></td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;dropdown-divider&quot;&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;dropdown-header&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;span title=&quot;harrisonthu/ComputerGraphic-csci-510-&quot;&gt;This repository&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;a class=&quot;dropdown-item&quot; href=&quot;/harrisonthu/ComputerGraphic-csci-510-/issues/new&quot; data-ga-click=&quot;Header, create new issue&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      New issue</span></td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/ul&gt;</span></td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;li class=&quot;header-nav-item dropdown js-menu-container&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;a class=&quot;header-nav-link name tooltipped tooltipped-sw js-menu-target&quot; href=&quot;/harrisonthu&quot;</span></td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       aria-label=&quot;View profile and more&quot;</span></td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       aria-expanded=&quot;false&quot;</span></td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       aria-haspopup=&quot;true&quot;</span></td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line"><span class="pl-s">       data-ga-click=&quot;Header, show menu, icon:avatar&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;img alt=&quot;@harrisonthu&quot; class=&quot;avatar&quot; src=&quot;https://avatars1.githubusercontent.com/u/7545692?v=4&amp;amp;s=40&quot; height=&quot;20&quot; width=&quot;20&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;span class=&quot;dropdown-caret&quot;&gt;&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;dropdown-menu-content js-menu-content&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;div class=&quot;dropdown-menu dropdown-menu-sw&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div class=&quot;dropdown-header header-nav-current-user css-truncate&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          Signed in as &lt;strong class=&quot;css-truncate-target&quot;&gt;harrisonthu&lt;/strong&gt;</span></td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div class=&quot;dropdown-divider&quot;&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;dropdown-item&quot; href=&quot;/harrisonthu&quot; data-ga-click=&quot;Header, go to profile, text:your profile&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          Your profile</span></td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;dropdown-item&quot; href=&quot;/harrisonthu?tab=stars&quot; data-ga-click=&quot;Header, go to starred repos, text:your stars&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          Your stars</span></td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;dropdown-item&quot; href=&quot;/explore&quot; data-ga-click=&quot;Header, go to explore, text:explore&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          Explore</span></td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;dropdown-item&quot; href=&quot;https://help.github.com&quot; data-ga-click=&quot;Header, go to help, text:help&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          Help</span></td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div class=&quot;dropdown-divider&quot;&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;dropdown-item&quot; href=&quot;/settings/profile&quot; data-ga-click=&quot;Header, go to settings, icon:settings&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          Settings</span></td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;!-- <span class="pl-pds">&#39;</span></span><span class="pl-s"><span class="pl-pds">&quot;</span>` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=<span class="pl-pds">&quot;</span></span>UTF-<span class="pl-c1">8</span><span class="pl-s"><span class="pl-pds">&quot;</span> action=<span class="pl-pds">&quot;</span></span>/logout<span class="pl-s"><span class="pl-pds">&quot;</span> class=<span class="pl-pds">&quot;</span></span>logout-form<span class="pl-s"><span class="pl-pds">&quot;</span> method=<span class="pl-pds">&quot;</span></span>post<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;div style=<span class="pl-pds">&quot;</span></span>margin:<span class="pl-c1">0</span>;padding:<span class="pl-c1">0</span>;display:<span class="pl-k">inline</span><span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;input name=<span class="pl-pds">&quot;</span></span>utf8<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>hidden<span class="pl-s"><span class="pl-pds">&quot;</span> value=<span class="pl-pds">&quot;</span></span>&amp;#x2713;<span class="pl-s"><span class="pl-pds">&quot;</span> /&gt;&lt;input name=<span class="pl-pds">&quot;</span></span>authenticity_token<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>hidden<span class="pl-s"><span class="pl-pds">&quot;</span> value=<span class="pl-pds">&quot;</span></span>lFDEKze9uezvMa60PqxZrhIgtqO9O6hWj6lhbnwoRLqRH/XqTb9s/W4xe49XXBQmmUn5xW3ejYCu5TsVkByWBg==<span class="pl-s"><span class="pl-pds">&quot;</span> /&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;button type=<span class="pl-pds">&quot;</span></span>submit<span class="pl-s"><span class="pl-pds">&quot;</span> class=<span class="pl-pds">&quot;</span></span>dropdown-item dropdown-signout<span class="pl-s"><span class="pl-pds">&quot;</span> data-ga-click=<span class="pl-pds">&quot;</span></span>Header, sign out, icon:logout<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;</span></td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            Sign out</span></td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;      &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/ul&gt;</span></td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;!-- &#39;<span class="pl-pds">&quot;</span></span>` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=<span class="pl-s"><span class="pl-pds">&quot;</span>UTF-8<span class="pl-pds">&quot;</span></span> action=<span class="pl-s"><span class="pl-pds">&quot;</span>/logout<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>sr-only right-0<span class="pl-pds">&quot;</span></span> method=<span class="pl-s"><span class="pl-pds">&quot;</span>post<span class="pl-pds">&quot;</span></span>&gt;&lt;div style=<span class="pl-s"><span class="pl-pds">&quot;</span>margin:0;padding:0;display:inline<span class="pl-pds">&quot;</span></span>&gt;&lt;input name=<span class="pl-s"><span class="pl-pds">&quot;</span>utf8<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>hidden<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>&amp;#x2713;<span class="pl-pds">&quot;</span></span> /&gt;&lt;input name=<span class="pl-s"><span class="pl-pds">&quot;</span>authenticity_token<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>hidden<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>HsFVo/iUx3N++fEV1ds8LaBB7lYegLwQC0GKnltBLNQbjmRigpYSYv/5JC68K3GlKyihMM5lmcYqDdDlt3X+aA==<span class="pl-pds">&quot;</span></span> /&gt;&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">      &lt;button type=<span class="pl-s"><span class="pl-pds">&quot;</span>submit<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>dropdown-item dropdown-signout<span class="pl-pds">&quot;</span></span> data-ga-click=<span class="pl-s"><span class="pl-pds">&quot;</span>Header, sign out, icon:logout<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">        Sign out</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">      &lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">&lt;/form&gt;  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">      </td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">  &lt;div id=<span class="pl-s"><span class="pl-pds">&quot;</span>start-of-content<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>show-on-focus<span class="pl-pds">&quot;</span></span>&gt;&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">    &lt;div id=<span class="pl-s"><span class="pl-pds">&quot;</span>js-flash-container<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">  &lt;div role=<span class="pl-s"><span class="pl-pds">&quot;</span>main<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">        &lt;div itemscope itemtype=<span class="pl-s"><span class="pl-pds">&quot;</span>http://schema.org/SoftwareSourceCode<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">    &lt;div id=<span class="pl-s"><span class="pl-pds">&quot;</span>js-repo-pjax-container<span class="pl-pds">&quot;</span></span> data-pjax-container&gt;</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">      </td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">    &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pagehead repohead instapaper_ignore readability-menu experiment-repo-nav<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">      &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>container repohead-details-container<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">        &lt;ul <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pagehead-actions<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">  &lt;li&gt;</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">        &lt;!-- <span class="pl-s"><span class="pl-pds">&#39;</span>&quot;` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=&quot;UTF-8&quot; action=&quot;/notifications/subscribe&quot; class=&quot;js-social-container&quot; data-autosubmit=&quot;true&quot; data-remote=&quot;true&quot; method=&quot;post&quot;&gt;&lt;div style=&quot;margin:0;padding:0;display:inline&quot;&gt;&lt;input name=&quot;utf8&quot; type=&quot;hidden&quot; value=&quot;&amp;#x2713;&quot; /&gt;&lt;input name=&quot;authenticity_token&quot; type=&quot;hidden&quot; value=&quot;i96GztIH4+5eeKTuGW9V6PDxEXQxDDmiz4PBWZUmXSd/h3egBFgkvweip/8hA+AbRZX9I3A+5NomQ62K8//XQw==&quot; /&gt;&lt;/div&gt;      &lt;input class=&quot;form-control&quot; id=&quot;repository_id&quot; name=&quot;repository_id&quot; type=&quot;hidden&quot; value=&quot;87033851&quot; /&gt;</span></td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div class=&quot;select-menu js-menu-container js-select-menu&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/subscription&quot;</span></td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            class=&quot;btn btn-sm btn-with-count select-menu-button js-menu-target&quot;</span></td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            role=&quot;button&quot;</span></td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            aria-haspopup=&quot;true&quot;</span></td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            aria-expanded=&quot;false&quot;</span></td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            aria-label=&quot;Toggle repository notifications menu&quot;</span></td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            data-ga-click=&quot;Repository, click Watch settings, action:blob#show&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;span class=&quot;js-select-button&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-eye&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;16&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                Unwatch</span></td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;a class=&quot;social-count js-social-count&quot;</span></td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              href=&quot;/harrisonthu/ComputerGraphic-csci-510-/watchers&quot;</span></td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              aria-label=&quot;1 user is watching this repository&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              1</span></td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div class=&quot;select-menu-modal-holder&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;div class=&quot;select-menu-modal subscription-menu-modal js-menu-content&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;div class=&quot;select-menu-header js-navigation-enable&quot; tabindex=&quot;-1&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;svg aria-label=&quot;Close&quot; class=&quot;octicon octicon-x js-menu-close&quot; height=&quot;16&quot; role=&quot;img&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 12 16&quot; width=&quot;12&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;span class=&quot;select-menu-title&quot;&gt;Notifications&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;div class=&quot;select-menu-list js-navigation-container&quot; role=&quot;menu&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;div class=&quot;select-menu-item js-navigation-item &quot; role=&quot;menuitem&quot; tabindex=&quot;0&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-check select-menu-item-icon&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 12 16&quot; width=&quot;12&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;div class=&quot;select-menu-item-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;input id=&quot;do_included&quot; name=&quot;do&quot; type=&quot;radio&quot; value=&quot;included&quot; /&gt;</span></td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;select-menu-item-heading&quot;&gt;Not watching&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;description&quot;&gt;Be notified when participating or @mentioned.&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;js-select-button-text hidden-select-button-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                      &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-eye&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;16&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                      Watch</span></td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;div class=&quot;select-menu-item js-navigation-item selected&quot; role=&quot;menuitem&quot; tabindex=&quot;0&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-check select-menu-item-icon&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 12 16&quot; width=&quot;12&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;div class=&quot;select-menu-item-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;input checked=&quot;checked&quot; id=&quot;do_subscribed&quot; name=&quot;do&quot; type=&quot;radio&quot; value=&quot;subscribed&quot; /&gt;</span></td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;select-menu-item-heading&quot;&gt;Watching&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;description&quot;&gt;Be notified of all conversations.&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;js-select-button-text hidden-select-button-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                      &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-eye&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;16&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                        Unwatch</span></td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;div class=&quot;select-menu-item js-navigation-item &quot; role=&quot;menuitem&quot; tabindex=&quot;0&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-check select-menu-item-icon&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 12 16&quot; width=&quot;12&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;div class=&quot;select-menu-item-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;input id=&quot;do_ignore&quot; name=&quot;do&quot; type=&quot;radio&quot; value=&quot;ignore&quot; /&gt;</span></td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;select-menu-item-heading&quot;&gt;Ignoring&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;description&quot;&gt;Never be notified.&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;span class=&quot;js-select-button-text hidden-select-button-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                      &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-mute&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;16&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                        Stop ignoring</span></td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                    &lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line"><span class="pl-s">                &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;</span></td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;li&gt;</span></td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    </span></td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;js-toggler-container js-social-container starring-container &quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;!-- <span class="pl-pds">&#39;</span></span><span class="pl-s"><span class="pl-pds">&quot;</span>` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=<span class="pl-pds">&quot;</span></span>UTF-<span class="pl-c1">8</span><span class="pl-s"><span class="pl-pds">&quot;</span> action=<span class="pl-pds">&quot;</span></span>/harrisonthu/ComputerGraphic-csci-<span class="pl-c1">510</span>-/unstar<span class="pl-s"><span class="pl-pds">&quot;</span> class=<span class="pl-pds">&quot;</span></span>starred<span class="pl-s"><span class="pl-pds">&quot;</span> data-remote=<span class="pl-pds">&quot;</span></span><span class="pl-c1">true</span><span class="pl-s"><span class="pl-pds">&quot;</span> method=<span class="pl-pds">&quot;</span></span>post<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;div style=<span class="pl-pds">&quot;</span></span>margin:<span class="pl-c1">0</span>;padding:<span class="pl-c1">0</span>;display:<span class="pl-k">inline</span><span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;input name=<span class="pl-pds">&quot;</span></span>utf8<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>hidden<span class="pl-s"><span class="pl-pds">&quot;</span> value=<span class="pl-pds">&quot;</span></span>&amp;#x2713;<span class="pl-s"><span class="pl-pds">&quot;</span> /&gt;&lt;input name=<span class="pl-pds">&quot;</span></span>authenticity_token<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>hidden<span class="pl-s"><span class="pl-pds">&quot;</span> value=<span class="pl-pds">&quot;</span></span>9fMqehFRe1DqWLuRcuf+fr3xMvy8LHFCBn41fQ59rDc5+7SM1xNuXpo7RwIo5tSgGjxSOiCtG2ES62ATnLjFbw==<span class="pl-s"><span class="pl-pds">&quot;</span> /&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;button</span></td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        type=<span class="pl-pds">&quot;</span></span>submit<span class="pl-s"><span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        class=<span class="pl-pds">&quot;</span></span>btn btn-sm btn-with-count js-toggler-target<span class="pl-s"><span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        aria-label=<span class="pl-pds">&quot;</span></span>Unstar <span class="pl-c1">this</span> repository<span class="pl-s"><span class="pl-pds">&quot;</span> title=<span class="pl-pds">&quot;</span></span>Unstar harrisonthu/ComputerGraphic-csci-<span class="pl-c1">510</span>-<span class="pl-s"><span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        data-ga-click=<span class="pl-pds">&quot;</span></span>Repository, click unstar button, action:blob#show; text:Unstar<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;</span></td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;svg aria-hidden=<span class="pl-pds">&quot;</span></span><span class="pl-c1">true</span><span class="pl-s"><span class="pl-pds">&quot;</span> class=<span class="pl-pds">&quot;</span></span>octicon octicon-star<span class="pl-s"><span class="pl-pds">&quot;</span> height=<span class="pl-pds">&quot;</span></span><span class="pl-c1">16</span><span class="pl-s"><span class="pl-pds">&quot;</span> version=<span class="pl-pds">&quot;</span></span><span class="pl-c1">1.1</span><span class="pl-s"><span class="pl-pds">&quot;</span> viewBox=<span class="pl-pds">&quot;</span></span><span class="pl-c1">0</span> <span class="pl-c1">0</span> <span class="pl-c1">14</span> <span class="pl-c1">16</span><span class="pl-s"><span class="pl-pds">&quot;</span> width=<span class="pl-pds">&quot;</span></span><span class="pl-c1">14</span><span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;path fill-rule=<span class="pl-pds">&quot;</span></span>evenodd<span class="pl-s"><span class="pl-pds">&quot;</span> d=<span class="pl-pds">&quot;</span></span>M14 <span class="pl-c1">6l</span>-<span class="pl-c1">4.9</span>-.64L7 <span class="pl-c1">1</span> <span class="pl-c1">4.9</span> <span class="pl-c1">5.36</span> <span class="pl-c1">0</span> 6l3<span class="pl-c1">.6</span> <span class="pl-c1">3</span>.26L2<span class="pl-c1">.67</span> <span class="pl-c1">14</span> <span class="pl-c1">7</span> <span class="pl-c1">11.67</span> <span class="pl-c1">11.33</span> <span class="pl-c1">14l</span>-.<span class="pl-c1">93</span>-<span class="pl-c1">4</span>.74z<span class="pl-s"><span class="pl-pds">&quot;</span>/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        Unstar</span></td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=<span class="pl-pds">&quot;</span></span>social-count js-social-count<span class="pl-s"><span class="pl-pds">&quot;</span> href=<span class="pl-pds">&quot;</span></span>/harrisonthu/ComputerGraphic-csci-<span class="pl-c1">510</span>-/stargazers<span class="pl-s"><span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line"><span class="pl-s">           aria-label=<span class="pl-pds">&quot;</span></span><span class="pl-c1">0</span> users starred <span class="pl-c1">this</span> repository<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;</span></td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          0</span></td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;</span></td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;!-- &#39;<span class="pl-pds">&quot;</span></span>` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=<span class="pl-s"><span class="pl-pds">&quot;</span>UTF-8<span class="pl-pds">&quot;</span></span> action=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/star<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>unstarred<span class="pl-pds">&quot;</span></span> data-remote=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> method=<span class="pl-s"><span class="pl-pds">&quot;</span>post<span class="pl-pds">&quot;</span></span>&gt;&lt;div style=<span class="pl-s"><span class="pl-pds">&quot;</span>margin:0;padding:0;display:inline<span class="pl-pds">&quot;</span></span>&gt;&lt;input name=<span class="pl-s"><span class="pl-pds">&quot;</span>utf8<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>hidden<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>&amp;#x2713;<span class="pl-pds">&quot;</span></span> /&gt;&lt;input name=<span class="pl-s"><span class="pl-pds">&quot;</span>authenticity_token<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>hidden<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>Rj45H87Dxc+2iJH+2MjEgPwyOCeYd7hqvR2cKbAFcZRcHuJ1i4dIYLMTY59iUlw3KoZmffIz3K/TP1AiTvjB5A==<span class="pl-pds">&quot;</span></span> /&gt;&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">      &lt;button</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">        type=<span class="pl-s"><span class="pl-pds">&quot;</span>submit<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>btn btn-sm btn-with-count js-toggler-target<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">        aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Star this repository<span class="pl-pds">&quot;</span></span> title=<span class="pl-s"><span class="pl-pds">&quot;</span>Star harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">        data-ga-click=<span class="pl-s"><span class="pl-pds">&quot;</span>Repository, click star button, action:blob#show; text:Star<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">        &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-star<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 14 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>14<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">        Star</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">      &lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">        &lt;a <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>social-count js-social-count<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/stargazers<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">           aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>0 users starred this repository<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">          <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">        &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">&lt;/form&gt;  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">  &lt;/li&gt;</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">  &lt;li&gt;</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">          &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>#fork-destination-box<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>btn btn-sm btn-with-count<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">              title=<span class="pl-s"><span class="pl-pds">&quot;</span>Fork your own copy of harrisonthu/ComputerGraphic-csci-510- to your account<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">              aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Fork your own copy of harrisonthu/ComputerGraphic-csci-510- to your account<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">              rel=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">              data-ga-click=<span class="pl-s"><span class="pl-pds">&quot;</span>Repository, show fork modal, action:blob#show; text:Fork<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">              &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-repo-forked<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 10 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>10<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">            Fork</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">          &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">          &lt;div id=<span class="pl-s"><span class="pl-pds">&quot;</span>fork-destination-box<span class="pl-pds">&quot;</span></span> style=<span class="pl-s"><span class="pl-pds">&quot;</span>display: none;<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">            &lt;h2 <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-header<span class="pl-pds">&quot;</span></span> data-facebox-id=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-header<span class="pl-pds">&quot;</span></span>&gt;Where should we fork <span class="pl-c1">this</span> repository?&lt;/h2&gt;</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">            &lt;include-fragment src=<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-fork-select-fragment fork-select-fragment<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">                data-url=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/fork?fragment=1<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">              &lt;img alt=<span class="pl-s"><span class="pl-pds">&quot;</span>Loading<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>64<span class="pl-pds">&quot;</span></span> src=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/images/spinners/octocat-spinner-128.gif<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>64<span class="pl-pds">&quot;</span></span> /&gt;</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">            &lt;/include-fragment&gt;</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">          &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">    &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/network<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>social-count<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">       aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>0 users forked this repository<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">    &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">  &lt;/li&gt;</td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">&lt;/ul&gt;</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">        &lt;h1 <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>public <span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">  &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-repo<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">  &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>author<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>author<span class="pl-pds">&quot;</span></span>&gt;&lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>url fn<span class="pl-pds">&quot;</span></span> rel=<span class="pl-s"><span class="pl-pds">&quot;</span>author<span class="pl-pds">&quot;</span></span>&gt;harrisonthu&lt;/a&gt;&lt;/span&gt;&lt;!--</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">--&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>path-divider<span class="pl-pds">&quot;</span></span>&gt;/&lt;/span&gt;&lt;!--</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">--&gt;&lt;strong itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>name<span class="pl-pds">&quot;</span></span>&gt;&lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> data-pjax=<span class="pl-s"><span class="pl-pds">&quot;</span>#js-repo-pjax-container<span class="pl-pds">&quot;</span></span>&gt;ComputerGraphic-csci-<span class="pl-c1">510</span>-&lt;/a&gt;&lt;/strong&gt;</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">&lt;/h1&gt;</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">      &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">      &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>container<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">&lt;nav <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>reponav js-repo-nav js-sidenav-container-pjax<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line">     itemscope</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">     itemtype=<span class="pl-s"><span class="pl-pds">&quot;</span>http://schema.org/BreadcrumbList<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">     role=<span class="pl-s"><span class="pl-pds">&quot;</span>navigation<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">     data-pjax=<span class="pl-s"><span class="pl-pds">&quot;</span>#js-repo-pjax-container<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">  &lt;span itemscope itemtype=<span class="pl-s"><span class="pl-pds">&quot;</span>http://schema.org/ListItem<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>itemListElement<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">    &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-selected-navigation-item selected reponav-item<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>g c<span class="pl-pds">&quot;</span></span> data-selected-links=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /harrisonthu/ComputerGraphic-csci-510-<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>url<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">      &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-code<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 14 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>14<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">      &lt;span itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>name<span class="pl-pds">&quot;</span></span>&gt;Code&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line">      &lt;meta itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>position<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>1<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;  &lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line">    &lt;span itemscope itemtype=<span class="pl-s"><span class="pl-pds">&quot;</span>http://schema.org/ListItem<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>itemListElement<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line">      &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/issues<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-selected-navigation-item reponav-item<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>g i<span class="pl-pds">&quot;</span></span> data-selected-links=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_issues repo_labels repo_milestones /harrisonthu/ComputerGraphic-csci-510-/issues<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>url<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line">        &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-issue-opened<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 14 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>14<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">        &lt;span itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>name<span class="pl-pds">&quot;</span></span>&gt;Issues&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>Counter<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">        &lt;meta itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>position<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>2<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;    &lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">  &lt;span itemscope itemtype=<span class="pl-s"><span class="pl-pds">&quot;</span>http://schema.org/ListItem<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>itemListElement<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line">    &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/pulls<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-selected-navigation-item reponav-item<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>g p<span class="pl-pds">&quot;</span></span> data-selected-links=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_pulls /harrisonthu/ComputerGraphic-csci-510-/pulls<span class="pl-pds">&quot;</span></span> itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>url<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line">      &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-git-pull-request<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">      &lt;span itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>name<span class="pl-pds">&quot;</span></span>&gt;Pull requests&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">      &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>Counter<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">      &lt;meta itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>position<span class="pl-pds">&quot;</span></span> content=<span class="pl-s"><span class="pl-pds">&quot;</span>3<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;  &lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line">    &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/projects<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-selected-navigation-item reponav-item<span class="pl-pds">&quot;</span></span> data-selected-links=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_projects new_repo_project repo_project /harrisonthu/ComputerGraphic-csci-510-/projects<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line">      &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-project<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 15 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>15<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">      Projects</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">      &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>Counter<span class="pl-pds">&quot;</span></span> &gt;<span class="pl-c1">0</span>&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">    &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/wiki<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-selected-navigation-item reponav-item<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>g w<span class="pl-pds">&quot;</span></span> data-selected-links=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_wiki /harrisonthu/ComputerGraphic-csci-510-/wiki<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">      &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-book<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 16 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">      Wiki</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">      &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/settings<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-selected-navigation-item reponav-item<span class="pl-pds">&quot;</span></span> data-selected-links=<span class="pl-s"><span class="pl-pds">&quot;</span>repo_settings repo_branch_settings hooks integration_installations /harrisonthu/ComputerGraphic-csci-510-/settings<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line">        &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-gear<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 14 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>14<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">        Settings</td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">    &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>reponav-dropdown js-menu-container<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">      &lt;button type=<span class="pl-s"><span class="pl-pds">&quot;</span>button<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>btn-link reponav-item reponav-dropdown js-menu-target <span class="pl-pds">&quot;</span></span> data-no-toggle aria-expanded=<span class="pl-s"><span class="pl-pds">&quot;</span>false<span class="pl-pds">&quot;</span></span> aria-haspopup=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">        Insights</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">        &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-triangle-down v-align-middle text-gray<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>11<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>8<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M0 5l6 6 6-6z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">      &lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line">      &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>dropdown-menu-content js-menu-content<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">        &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>dropdown-menu dropdown-menu-sw<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line">            &lt;a <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>dropdown-item<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/community<span class="pl-pds">&quot;</span></span> data-skip-pjax&gt;</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line">              &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-heart<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M11.2 3c-.52-.63-1.25-.95-2.2-1-.97 0-1.69.42-2.2 1-.51.58-.78.92-.8 1-.02-.08-.28-.42-.8-1-.52-.58-1.17-1-2.2-1-.95.05-1.69.38-2.2 1-.52.61-.78 1.28-.8 2 0 .52.09 1.52.67 2.67C1.25 8.82 3.01 10.61 6 13c2.98-2.39 4.77-4.17 5.34-5.33C11.91 6.51 12 5.5 12 5c-.02-.72-.28-1.39-.8-2.02V3z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line">              &lt;span itemprop=<span class="pl-s"><span class="pl-pds">&quot;</span>name<span class="pl-pds">&quot;</span></span>&gt;Community&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line">            &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line">          &lt;a <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>dropdown-item<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/pulse<span class="pl-pds">&quot;</span></span> data-skip-pjax&gt;</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">            &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-pulse<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 14 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>14<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line">            Pulse</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">          &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">          &lt;a <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>dropdown-item<span class="pl-pds">&quot;</span></span> href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/graphs<span class="pl-pds">&quot;</span></span> data-skip-pjax&gt;</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line">            &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-graph<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 16 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">            Graphs</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code blob-code-inner js-file-line">          &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code blob-code-inner js-file-line">        &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code blob-code-inner js-file-line">      &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code blob-code-inner js-file-line">    &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code blob-code-inner js-file-line">&lt;/nav&gt;</td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code blob-code-inner js-file-line">      &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code blob-code-inner js-file-line">    &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code blob-code-inner js-file-line">&lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>container new-discussion-timeline experiment-repo-nav<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>repository-content<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code blob-code-inner js-file-line">  &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/blob/0c0922d85cf50d474aa4f595b979677d1d7c99a9/Lab5/Buffers.cpp<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>d-none js-permalink-shortcut<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>y<span class="pl-pds">&quot;</span></span>&gt;Permalink&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code blob-code-inner js-file-line">  &lt;!-- blob contrib key: blob_contributors:v21:432f857c1289a6e00137ea6963c0d8ed --&gt;</td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>file-navigation js-zeroclipboard-container<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code blob-code-inner js-file-line">&lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu branch-select-menu js-menu-container js-select-menu float-left<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code blob-code-inner js-file-line">  &lt;button <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span> btn btn-sm select-menu-button js-menu-target css-truncate<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>w<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code blob-code-inner js-file-line">    type=<span class="pl-s"><span class="pl-pds">&quot;</span>button<span class="pl-pds">&quot;</span></span> aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Switch branches or tags<span class="pl-pds">&quot;</span></span> aria-expanded=<span class="pl-s"><span class="pl-pds">&quot;</span>false<span class="pl-pds">&quot;</span></span> aria-haspopup=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code blob-code-inner js-file-line">      &lt;i&gt;Branch:&lt;/i&gt;</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code blob-code-inner js-file-line">      &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-select-button css-truncate-target<span class="pl-pds">&quot;</span></span>&gt;master&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code blob-code-inner js-file-line">  &lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-modal-holder js-menu-content js-navigation-container<span class="pl-pds">&quot;</span></span> data-pjax&gt;</td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code blob-code-inner js-file-line">    &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-modal<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code blob-code-inner js-file-line">      &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-header<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code blob-code-inner js-file-line">        &lt;svg aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Close<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-x js-menu-close<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>img<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code blob-code-inner js-file-line">        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-title<span class="pl-pds">&quot;</span></span>&gt;Switch branches/tags&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code blob-code-inner js-file-line">      &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code blob-code-inner js-file-line">      &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-filters<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code blob-code-inner js-file-line">        &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-text-filter<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code blob-code-inner js-file-line">          &lt;input type=<span class="pl-s"><span class="pl-pds">&quot;</span>text<span class="pl-pds">&quot;</span></span> aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Find or create a branch…<span class="pl-pds">&quot;</span></span> id=<span class="pl-s"><span class="pl-pds">&quot;</span>context-commitish-filter-field<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>form-control js-filterable-field js-navigation-enable<span class="pl-pds">&quot;</span></span> placeholder=<span class="pl-s"><span class="pl-pds">&quot;</span>Find or create a branch…<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code blob-code-inner js-file-line">        &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code blob-code-inner js-file-line">        &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-tabs<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code blob-code-inner js-file-line">          &lt;ul&gt;</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code blob-code-inner js-file-line">            &lt;li <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-tab<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code blob-code-inner js-file-line">              &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>#<span class="pl-pds">&quot;</span></span> data-tab-filter=<span class="pl-s"><span class="pl-pds">&quot;</span>branches<span class="pl-pds">&quot;</span></span> data-filter-placeholder=<span class="pl-s"><span class="pl-pds">&quot;</span>Find or create a branch…<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-select-menu-tab<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>tab<span class="pl-pds">&quot;</span></span>&gt;Branches&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code blob-code-inner js-file-line">            &lt;/li&gt;</td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code blob-code-inner js-file-line">            &lt;li <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-tab<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code blob-code-inner js-file-line">              &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span>#<span class="pl-pds">&quot;</span></span> data-tab-filter=<span class="pl-s"><span class="pl-pds">&quot;</span>tags<span class="pl-pds">&quot;</span></span> data-filter-placeholder=<span class="pl-s"><span class="pl-pds">&quot;</span>Find a tag…<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-select-menu-tab<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>tab<span class="pl-pds">&quot;</span></span>&gt;Tags&lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code blob-code-inner js-file-line">            &lt;/li&gt;</td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code blob-code-inner js-file-line">          &lt;/ul&gt;</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code blob-code-inner js-file-line">        &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code blob-code-inner js-file-line">      &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code blob-code-inner js-file-line">      &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket<span class="pl-pds">&quot;</span></span> data-tab-filter=<span class="pl-s"><span class="pl-pds">&quot;</span>branches<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>menu<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code blob-code-inner js-file-line">        &lt;div data-filterable-<span class="pl-k">for</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>context-commitish-filter-field<span class="pl-pds">&quot;</span></span> data-filterable-type=<span class="pl-s"><span class="pl-pds">&quot;</span>substring<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code blob-code-inner js-file-line">            &lt;a <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-item js-navigation-item js-navigation-open selected<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code blob-code-inner js-file-line">               href=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/blob/master/Lab5/Buffers.cpp<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code blob-code-inner js-file-line">               data-name=<span class="pl-s"><span class="pl-pds">&quot;</span>master<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code blob-code-inner js-file-line">               data-skip-pjax=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code blob-code-inner js-file-line">               rel=<span class="pl-s"><span class="pl-pds">&quot;</span>nofollow<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code blob-code-inner js-file-line">              &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-check select-menu-item-icon<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code blob-code-inner js-file-line">              &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>select-menu-item-text css-truncate-target js-select-menu-filter-text<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code blob-code-inner js-file-line">                master</td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code blob-code-inner js-file-line">              &lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code blob-code-inner js-file-line">            &lt;/a&gt;</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code blob-code-inner js-file-line">        &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code blob-code-inner js-file-line">          &lt;!-- <span class="pl-s"><span class="pl-pds">&#39;</span>&quot;` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=&quot;UTF-8&quot; action=&quot;/harrisonthu/ComputerGraphic-csci-510-/branches&quot; class=&quot;js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form&quot; method=&quot;post&quot;&gt;&lt;div style=&quot;margin:0;padding:0;display:inline&quot;&gt;&lt;input name=&quot;utf8&quot; type=&quot;hidden&quot; value=&quot;&amp;#x2713;&quot; /&gt;&lt;input name=&quot;authenticity_token&quot; type=&quot;hidden&quot; value=&quot;u/+WF4QR28p7fBo1TeCWjd1N3hfHA+eVZ35WUPB2e+kMThuN9LgQzkxqEexN5JrYpZiPVXDu3coBLaq450u4tg==&quot; /&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-git-branch select-menu-item-icon&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 10 16&quot; width=&quot;10&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M10 5c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v.3c-.02.52-.23.98-.63 1.38-.4.4-.86.61-1.38.63-.83.02-1.48.16-2 .45V4.72a1.993 1.993 0 0 0-1-3.72C.88 1 0 1.89 0 3a2 2 0 0 0 1 1.72v6.56c-.59.35-1 .99-1 1.72 0 1.11.89 2 2 2 1.11 0 2-.89 2-2 0-.53-.2-1-.53-1.36.09-.06.48-.41.59-.47.25-.11.56-.17.94-.17 1.05-.05 1.95-.45 2.75-1.25S8.95 7.77 9 6.73h-.02C9.59 6.37 10 5.73 10 5zM2 1.8c.66 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2C1.35 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2zm0 12.41c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm6-8c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;div class=&quot;select-menu-item-text&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;span class=&quot;select-menu-item-heading&quot;&gt;Create branch: &lt;span class=&quot;js-new-item-name&quot;&gt;&lt;/span&gt;&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code blob-code-inner js-file-line"><span class="pl-s">              &lt;span class=&quot;description&quot;&gt;from ‘master’&lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;input type=&quot;hidden&quot; name=&quot;name&quot; id=&quot;name&quot; class=&quot;js-new-item-value&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;input type=&quot;hidden&quot; name=&quot;branch&quot; id=&quot;branch&quot; value=&quot;master&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;input type=&quot;hidden&quot; name=&quot;path&quot; id=&quot;path&quot; value=&quot;Lab5/Buffers.cpp&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;</span></td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;div class=&quot;select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket&quot; data-tab-filter=&quot;tags&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div data-filterable-for=&quot;context-commitish-filter-field&quot; data-filterable-type=&quot;substring&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;div class=&quot;select-menu-no-results&quot;&gt;Nothing to show&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;BtnGroup float-right&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/find/master&quot;</span></td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            class=&quot;js-pjax-capture-input btn btn-sm BtnGroup-item&quot;</span></td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            data-pjax</span></td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            data-hotkey=&quot;t&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        Find file</span></td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;button aria-label=&quot;Copy file path to clipboard&quot; class=&quot;js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s&quot; data-copied-hint=&quot;Copied!&quot; type=&quot;button&quot;&gt;Copy path&lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;breadcrumb js-zeroclipboard-target&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;span class=&quot;repo-root js-repo-root&quot;&gt;&lt;span class=&quot;js-path-segment&quot;&gt;&lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-&quot;&gt;&lt;span&gt;ComputerGraphic-csci-510-&lt;/span&gt;&lt;/a&gt;&lt;/span&gt;&lt;/span&gt;&lt;span class=&quot;separator&quot;&gt;/&lt;/span&gt;&lt;span class=&quot;js-path-segment&quot;&gt;&lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/tree/master/Lab5&quot;&gt;&lt;span&gt;Lab5&lt;/span&gt;&lt;/a&gt;&lt;/span&gt;&lt;span class=&quot;separator&quot;&gt;/&lt;/span&gt;&lt;strong class=&quot;final-path&quot;&gt;Buffers.cpp&lt;/strong&gt;</span></td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  </span></td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;commit-tease&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;span class=&quot;float-right&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;commit-tease-sha&quot; href=&quot;/harrisonthu/ComputerGraphic-csci-510-/commit/0c0922d85cf50d474aa4f595b979677d1d7c99a9&quot; data-pjax&gt;</span></td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          0c0922d</span></td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;relative-time datetime=&quot;2017-07-12T22:31:04Z&quot;&gt;Jul 12, 2017&lt;/relative-time&gt;</span></td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/span&gt;</span></td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;div&gt;</span></td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;img alt=&quot;@harrisonthu&quot; class=&quot;avatar&quot; height=&quot;20&quot; src=&quot;https://avatars1.githubusercontent.com/u/7545692?v=4&amp;amp;s=40&quot; width=&quot;20&quot; /&gt;</span></td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a href=&quot;/harrisonthu&quot; class=&quot;user-mention&quot; rel=&quot;author&quot;&gt;harrisonthu&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/commit/0c0922d85cf50d474aa4f595b979677d1d7c99a9&quot; class=&quot;message&quot; data-pjax=&quot;true&quot; title=&quot;Add files via upload&quot;&gt;Add files via upload&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;commit-tease-contributors&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;button type=&quot;button&quot; class=&quot;btn-link muted-link contributors-toggle&quot; data-facebox=&quot;#blob_contributors_box&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;strong&gt;1&lt;/strong&gt;</span></td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code blob-code-inner js-file-line"><span class="pl-s">         contributor</span></td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      </span></td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div id=&quot;blob_contributors_box&quot; style=&quot;display:none&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;h2 class=&quot;facebox-header&quot; data-facebox-id=&quot;facebox-header&quot;&gt;Users who have contributed to this file&lt;/h2&gt;</span></td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;ul class=&quot;facebox-user-list&quot; data-facebox-id=&quot;facebox-description&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;li class=&quot;facebox-user-list-item&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;img alt=&quot;@harrisonthu&quot; height=&quot;24&quot; src=&quot;https://avatars3.githubusercontent.com/u/7545692?v=4&amp;amp;s=48&quot; width=&quot;24&quot; /&gt;</span></td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;a href=&quot;/harrisonthu&quot;&gt;harrisonthu&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;/ul&gt;</span></td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;file&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;file-header&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;file-actions&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;div class=&quot;BtnGroup&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/raw/master/Lab5/Buffers.cpp&quot; class=&quot;btn btn-sm BtnGroup-item&quot; id=&quot;raw-url&quot;&gt;Raw&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/blame/master/Lab5/Buffers.cpp&quot; class=&quot;btn btn-sm js-update-url-with-hash BtnGroup-item&quot; data-hotkey=&quot;b&quot;&gt;Blame&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;a href=&quot;/harrisonthu/ComputerGraphic-csci-510-/commits/master/Lab5/Buffers.cpp&quot; class=&quot;btn btn-sm BtnGroup-item&quot; rel=&quot;nofollow&quot;&gt;History&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;a class=&quot;btn-octicon tooltipped tooltipped-nw&quot;</span></td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code blob-code-inner js-file-line"><span class="pl-s">           href=&quot;github-windows://openRepo/https://github.com/harrisonthu/ComputerGraphic-csci-510-?branch=master&amp;amp;filepath=Lab5%2FBuffers.cpp&quot;</span></td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code blob-code-inner js-file-line"><span class="pl-s">           aria-label=&quot;Open this file in GitHub Desktop&quot;</span></td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code blob-code-inner js-file-line"><span class="pl-s">           data-ga-click=&quot;Repository, open with desktop, type:windows&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-device-desktop&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;16&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;!-- <span class="pl-pds">&#39;</span></span><span class="pl-s"><span class="pl-pds">&quot;</span>` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=<span class="pl-pds">&quot;</span></span>UTF-<span class="pl-c1">8</span><span class="pl-s"><span class="pl-pds">&quot;</span> action=<span class="pl-pds">&quot;</span></span>/harrisonthu/ComputerGraphic-csci-<span class="pl-c1">510</span>-/edit/master/Lab5/Buffers.cpp<span class="pl-s"><span class="pl-pds">&quot;</span> class=<span class="pl-pds">&quot;</span></span><span class="pl-k">inline</span>-form js-update-url-with-hash<span class="pl-s"><span class="pl-pds">&quot;</span> method=<span class="pl-pds">&quot;</span></span>post<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;div style=<span class="pl-pds">&quot;</span></span>margin:<span class="pl-c1">0</span>;padding:<span class="pl-c1">0</span>;display:<span class="pl-k">inline</span><span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;input name=<span class="pl-pds">&quot;</span></span>utf8<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>hidden<span class="pl-s"><span class="pl-pds">&quot;</span> value=<span class="pl-pds">&quot;</span></span>&amp;#x2713;<span class="pl-s"><span class="pl-pds">&quot;</span> /&gt;&lt;input name=<span class="pl-pds">&quot;</span></span>authenticity_token<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>hidden<span class="pl-s"><span class="pl-pds">&quot;</span> value=<span class="pl-pds">&quot;</span></span>BQxb6TuRZtOglI7nnwXxa8hfQs9jPWdX/02WZ65lBGlYn8CRj6hd1yjGP5bcIqdp8C2kBDZMWZ5iyQrB9TO7sw==<span class="pl-s"><span class="pl-pds">&quot;</span> /&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;button class=<span class="pl-pds">&quot;</span></span>btn-octicon tooltipped tooltipped-nw<span class="pl-s"><span class="pl-pds">&quot;</span> type=<span class="pl-pds">&quot;</span></span>submit<span class="pl-s"><span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            aria-label=<span class="pl-pds">&quot;</span></span>Edit <span class="pl-c1">this</span> file<span class="pl-s"><span class="pl-pds">&quot;</span> data-hotkey=<span class="pl-pds">&quot;</span></span>e<span class="pl-s"><span class="pl-pds">&quot;</span> data-disable-with&gt;</span></td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code blob-code-inner js-file-line"><span class="pl-s">            &lt;svg aria-hidden=<span class="pl-pds">&quot;</span></span><span class="pl-c1">true</span><span class="pl-s"><span class="pl-pds">&quot;</span> class=<span class="pl-pds">&quot;</span></span>octicon octicon-pencil<span class="pl-s"><span class="pl-pds">&quot;</span> height=<span class="pl-pds">&quot;</span></span><span class="pl-c1">16</span><span class="pl-s"><span class="pl-pds">&quot;</span> version=<span class="pl-pds">&quot;</span></span><span class="pl-c1">1.1</span><span class="pl-s"><span class="pl-pds">&quot;</span> viewBox=<span class="pl-pds">&quot;</span></span><span class="pl-c1">0</span> <span class="pl-c1">0</span> <span class="pl-c1">14</span> <span class="pl-c1">16</span><span class="pl-s"><span class="pl-pds">&quot;</span> width=<span class="pl-pds">&quot;</span></span><span class="pl-c1">14</span><span class="pl-s"><span class="pl-pds">&quot;</span>&gt;&lt;path fill-rule=<span class="pl-pds">&quot;</span></span>evenodd<span class="pl-s"><span class="pl-pds">&quot;</span> d=<span class="pl-pds">&quot;</span></span>M0 12v3h3l8-<span class="pl-c1">8</span>-<span class="pl-c1">3</span>-<span class="pl-c1">3</span>-<span class="pl-c1">8</span> 8zm3 2H1v-2h1v1h1v1zm10<span class="pl-c1">.3</span>-<span class="pl-c1">9</span>.3L12 <span class="pl-c1">6</span> <span class="pl-c1">9</span> 3l1<span class="pl-c1">.3</span>-<span class="pl-c1">1</span>.3a<span class="pl-c1">.996.996</span> <span class="pl-c1">0</span> <span class="pl-c1">0</span> <span class="pl-c1">1</span> <span class="pl-c1">1.41</span> 0l1<span class="pl-c1">.59</span> <span class="pl-c1">1</span>.59c<span class="pl-c1">.39.39.39</span> <span class="pl-c1">1.02</span> <span class="pl-c1">0</span> <span class="pl-c1">1</span>.41z<span class="pl-s"><span class="pl-pds">&quot;</span>/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code blob-code-inner js-file-line"><span class="pl-s">          &lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;        &lt;!-- &#39;<span class="pl-pds">&quot;</span></span>` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=<span class="pl-s"><span class="pl-pds">&quot;</span>UTF-8<span class="pl-pds">&quot;</span></span> action=<span class="pl-s"><span class="pl-pds">&quot;</span>/harrisonthu/ComputerGraphic-csci-510-/delete/master/Lab5/Buffers.cpp<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>inline-form<span class="pl-pds">&quot;</span></span> method=<span class="pl-s"><span class="pl-pds">&quot;</span>post<span class="pl-pds">&quot;</span></span>&gt;&lt;div style=<span class="pl-s"><span class="pl-pds">&quot;</span>margin:0;padding:0;display:inline<span class="pl-pds">&quot;</span></span>&gt;&lt;input name=<span class="pl-s"><span class="pl-pds">&quot;</span>utf8<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>hidden<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>&amp;#x2713;<span class="pl-pds">&quot;</span></span> /&gt;&lt;input name=<span class="pl-s"><span class="pl-pds">&quot;</span>authenticity_token<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>hidden<span class="pl-pds">&quot;</span></span> value=<span class="pl-s"><span class="pl-pds">&quot;</span>ILn7qBoBrCaDLEpE5w8hPwdp14TRXL6r6jZjH9+8IAcGhx0OOKtsZVCAozTNbqH7S1BrWOghgb44xZeLnKJyEw==<span class="pl-pds">&quot;</span></span> /&gt;&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code blob-code-inner js-file-line">          &lt;button <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>btn-octicon btn-octicon-danger tooltipped tooltipped-nw<span class="pl-pds">&quot;</span></span> type=<span class="pl-s"><span class="pl-pds">&quot;</span>submit<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code blob-code-inner js-file-line">            aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Delete this file<span class="pl-pds">&quot;</span></span> data-disable-with&gt;</td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code blob-code-inner js-file-line">            &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-trashcan<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code blob-code-inner js-file-line">          &lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code blob-code-inner js-file-line">&lt;/form&gt;  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>file-info<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">147</span> <span class="pl-en">lines</span> (<span class="pl-c1">121</span> sloc)</td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code blob-code-inner js-file-line">      &lt;span class=&quot;file-info-divider&quot;&gt;&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code blob-code-inner js-file-line">    3.68 KB</td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code blob-code-inner js-file-line">&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code blob-code-inner js-file-line">  &lt;div itemprop=&quot;text&quot; class=&quot;blob-wrapper data type-c&quot;&gt;</td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code blob-code-inner js-file-line">      &lt;table class=&quot;highlight tab-size js-file-line-container&quot; data-tab-size=&quot;8&quot;&gt;</td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L1&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;1&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC1&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L2&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;2&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC2&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;  Buffers.cpp&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L3&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;3&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC3&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L4&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;4&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC4&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;  Vertex and element buffer implementations.&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L5&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;5&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC5&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L6&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;6&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC6&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;  Author:  Warren R. Carithers&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L7&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;7&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC7&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;  Date:    2017/02/11 22:34:54&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L8&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;8&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC8&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;&lt;span class=&quot;pl-c&quot;&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L9&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;9&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC9&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;</td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L10&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;10&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC10&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;lt;&lt;/span&gt;cstdlib&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;gt;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L11<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>11<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC11<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;lt;&lt;/span&gt;iostream&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;gt;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L12<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC12<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L13<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>13<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC13<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">if</span>&lt;/span&gt; <span class="pl-en">defined</span>(_WIN32) || defined(_WIN64)&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;L14&quot; class=&quot;blob-num js-line-number&quot; data-line-number=&quot;14&quot;&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code blob-code-inner js-file-line">        &lt;td id=&quot;LC14&quot; class=&quot;blob-code blob-code-inner js-file-line&quot;&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;lt;&lt;/span&gt;windows.h&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;gt;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L15<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>15<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC15<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;endif&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L16<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC16<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L17<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>17<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC17<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;ifndef&lt;/span&gt; __APPLE__&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L18<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>18<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC18<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;lt;&lt;/span&gt;GL/glew.h&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;gt;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L19<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>19<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC19<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;endif&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L20<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>20<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC20<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L21<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>21<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC21<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;lt;&lt;/span&gt;GLFW/glfw3.h&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;gt;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L22<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>22<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC22<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L23<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>23<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC23<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;Buffers.h&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L24<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>24<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC24<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;#&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;include&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;Canvas.h&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L25<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>25<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC25<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L26<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>26<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC26<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L27<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>27<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC27<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; Constructor&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L28<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>28<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC28<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L29<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>29<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC29<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-en<span class="pl-pds">&quot;</span></span>&gt;BufferSet::BufferSet&lt;/span&gt;( &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">void</span>&lt;/span&gt; ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L30<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>30<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC30<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; do this the easy way&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L31<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>31<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC31<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;initBuffer&lt;/span&gt;();&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L32<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>32<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC32<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;}&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L33<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>33<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC33<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L34<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>34<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC34<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L35<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>35<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC35<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; initBuffer() - reset the supplied BufferSet to its &amp;quot;empty&amp;quot; state&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L36<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>36<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC36<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L37<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>37<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC37<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">void</span>&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-en<span class="pl-pds">&quot;</span></span>&gt;BufferSet::initBuffer&lt;/span&gt;( &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">void</span>&lt;/span&gt; ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L38<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>38<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC38<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    vbuffer = ebuffer = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L39<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>39<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC39<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    numElements = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L40<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>40<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC40<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    vSize = eSize = tSize = cSize = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L41<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>41<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC41<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    bufferInit = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">false</span>&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L42<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>42<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC42<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;}&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L43<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>43<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC43<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L44<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>44<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC44<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L45<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>45<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC45<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; dumpBuffer(buf) - dump the contents of a BufferSet&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L46<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>46<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC46<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L47<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>47<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC47<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @param which - description of the buffer&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L48<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>48<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC48<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @param buf - the buffer to dump&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L49<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>49<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC49<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L50<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>50<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC50<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">void</span>&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-en<span class="pl-pds">&quot;</span></span>&gt;BufferSet::dumpBuffer&lt;/span&gt;( &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">const</span>&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">char</span>&lt;/span&gt; *which, BufferSet &amp;amp;buf ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L51<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>51<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC51<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    cout &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;Dumping buffer &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; which &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt; (&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L52<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>52<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC52<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">if</span>&lt;/span&gt;( buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;bufferInit&lt;/span&gt; ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L53<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>53<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC53<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        cout &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;initialized)&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; endl;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L54<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>54<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC54<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    } &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">else</span>&lt;/span&gt; {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L55<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>55<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC55<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        cout &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;<span class="pl-k">not</span> initialized)&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; endl;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L56<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>56<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC56<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    }&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L57<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>57<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC57<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    cout &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;  IDs: v &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;vbuffer&lt;/span&gt; &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt; e &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;ebuffer&lt;/span&gt; &amp;lt;&amp;lt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L58<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>58<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC58<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;#elements: &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;numElements&lt;/span&gt; &amp;lt;&amp;lt; endl;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L59<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>59<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC59<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    cout &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;  Sizes:  v &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;vSize&lt;/span&gt; &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt; e &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;eSize&lt;/span&gt; &amp;lt;&amp;lt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L60<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>60<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC60<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt; t &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;tSize&lt;/span&gt; &amp;lt;&amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-s<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt; c &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-pds<span class="pl-pds">&quot;</span></span>&gt;&amp;quot;&lt;/span&gt;&lt;/span&gt; &amp;lt;&amp;lt; buf.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-smi<span class="pl-pds">&quot;</span></span>&gt;cSize&lt;/span&gt; &amp;lt;&amp;lt; endl;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L61<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>61<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC61<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;}&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L62<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>62<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC62<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L63<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>63<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC63<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L64<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>64<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC64<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; makeBuffer() - make a vertex or element array buffer&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L65<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>65<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC65<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L66<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>66<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC66<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @param target - which type of buffer to create&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L67<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>67<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC67<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @param data   - source of data for buffer (or NULL)&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L68<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>68<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC68<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @param size   - desired length of buffer&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L69<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>69<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC69<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L70<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>70<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC70<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @return the ID of the new buffer&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L71<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>71<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC71<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L72<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>72<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC72<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;GLuint &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-en<span class="pl-pds">&quot;</span></span>&gt;BufferSet::makeBuffer&lt;/span&gt;( GLenum target, &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">const</span>&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">void</span>&lt;/span&gt; *data, GLsizei size ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L73<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>73<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC73<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    GLuint buffer;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L74<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>74<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC74<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L75<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>75<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC75<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glGenBuffers&lt;/span&gt;( &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">1</span>&lt;/span&gt;, &amp;amp;buffer );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L76<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>76<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC76<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glBindBuffer&lt;/span&gt;( target, buffer );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L77<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>77<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC77<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glBufferData&lt;/span&gt;( target, size, data, GL_STATIC_DRAW );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L78<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>78<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC78<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L79<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>79<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC79<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">return</span>&lt;/span&gt;( buffer );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L80<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>80<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC80<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;}&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L81<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>81<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC81<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L82<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>82<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC82<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L83<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>83<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC83<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; createBuffers(buf,canvas) create a set of buffers for the object&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L84<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>84<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC84<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;     currently held in &amp;#39;canvas&amp;#39;.&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L85<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>85<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC85<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L86<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>86<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC86<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; @param C   - the Canvas we&amp;#39;ll use for drawing&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L87<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>87<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC87<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt;/&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L88<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>88<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC88<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">void</span>&lt;/span&gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-en<span class="pl-pds">&quot;</span></span>&gt;BufferSet::createBuffers&lt;/span&gt;( Canvas &amp;amp;C ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L89<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>89<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC89<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L90<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>90<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC90<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; first, reset this BufferSet&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L91<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>91<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC91<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">if</span>&lt;/span&gt;( bufferInit ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L92<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>92<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC92<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; must delete the existing buffer IDs first&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L93<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>93<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC93<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glDeleteBuffers&lt;/span&gt;( &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">1</span>&lt;/span&gt;, &amp;amp;(vbuffer) );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L94<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>94<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC94<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glDeleteBuffers&lt;/span&gt;( &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">1</span>&lt;/span&gt;, &amp;amp;(ebuffer) );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L95<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>95<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC95<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    }&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L96<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>96<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC96<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L97<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>97<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC97<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; clear everything out&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L98<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>98<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC98<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;initBuffer&lt;/span&gt;();&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L99<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>99<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC99<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L100<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>100<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC100<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; get the vertex count&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L101<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>101<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC101<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    numElements = C.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;numVertices&lt;/span&gt;();&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L102<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>102<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC102<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L103<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>103<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC103<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; if there are no vertices, there&amp;#39;s nothing for us to do&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L104<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>104<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC104<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">if</span>&lt;/span&gt;( numElements &amp;lt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">1</span>&lt;/span&gt; ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L105<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>105<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC105<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">return</span>&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L106<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>106<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC106<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    }&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L107<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>107<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC107<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L108<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>108<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC108<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; OK, we have vertices!&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L109<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>109<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC109<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; #bytes = number of elements * 4 floats/element * bytes/float&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L110<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>110<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC110<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    vSize = numElements * &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">4</span>&lt;/span&gt; * &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">sizeof</span>&lt;/span&gt;(&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">float</span>&lt;/span&gt;);&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="LC1137" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="LC1138" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L111<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>111<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="LC1139" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC111<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">float</span>&lt;/span&gt; *points = C.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;getVertices&lt;/span&gt;();&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="LC1140" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="LC1141" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="LC1142" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L112<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>112<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="LC1143" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC112<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="LC1144" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="LC1145" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="LC1146" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="LC1147" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L113<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>113<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="LC1148" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC113<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; accumulate the required vertex buffer size&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="LC1149" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="LC1150" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="LC1151" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L114<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>114<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="LC1152" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC114<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">int</span>&lt;/span&gt; vbufSize = vSize;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="LC1153" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="LC1154" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="LC1155" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L115<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>115<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="LC1156" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC115<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="LC1157" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="LC1158" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="LC1159" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="LC1160" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L116<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>116<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="LC1161" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC116<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; get the color data (if there is any)&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="LC1162" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="LC1163" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="LC1164" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L117<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>117<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="LC1165" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC117<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">float</span>&lt;/span&gt; *colors = C.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;getColors&lt;/span&gt;();&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="LC1166" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="LC1167" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="LC1168" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L118<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>118<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="LC1169" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC118<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">if</span>&lt;/span&gt;( colors != &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">NULL</span>&lt;/span&gt; ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="LC1170" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="LC1171" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="LC1172" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L119<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>119<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="LC1173" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC119<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        cSize = numElements * &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">4</span>&lt;/span&gt; * &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">sizeof</span>&lt;/span&gt;(&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">float</span>&lt;/span&gt;);&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="LC1174" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="LC1175" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="LC1176" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L120<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>120<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="LC1177" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC120<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        vbufSize += cSize;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="LC1178" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="LC1179" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="LC1180" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L121<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>121<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="LC1181" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC121<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    }&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="LC1182" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="LC1183" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="LC1184" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L122<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>122<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="LC1185" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC122<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="LC1186" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="LC1187" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="LC1188" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="LC1189" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L123<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>123<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="LC1190" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC123<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; get the element data&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="LC1191" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="LC1192" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="LC1193" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L124<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>124<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="LC1194" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC124<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; #bytes = number of elements * bytes/element&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="LC1195" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="LC1196" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="LC1197" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L125<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>125<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="LC1198" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC125<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    eSize = numElements * &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">sizeof</span>&lt;/span&gt;(GLuint);&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="LC1199" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="LC1200" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="LC1201" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L126<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>126<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="LC1202" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC126<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    GLuint *elements = C.&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;getElements&lt;/span&gt;();&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="LC1203" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="LC1204" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="LC1205" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L127<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>127<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="LC1206" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC127<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="LC1207" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="LC1208" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="LC1209" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="LC1210" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L128<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>128<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="LC1211" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC128<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; first, create the connectivity data&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="LC1212" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="LC1213" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="LC1214" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L129<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>129<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="LC1215" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC129<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    ebuffer = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;makeBuffer&lt;/span&gt;( GL_ELEMENT_ARRAY_BUFFER, elements, eSize );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="LC1216" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="LC1217" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="LC1218" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L130<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>130<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="LC1219" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC130<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="LC1220" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="LC1221" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="LC1222" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="LC1223" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L131<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>131<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="LC1224" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC131<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; next, the vertex buffer, containing vertices and &amp;quot;extra&amp;quot; data&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="LC1225" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="LC1226" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="LC1227" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L132<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>132<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="LC1228" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC132<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    vbuffer = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;makeBuffer&lt;/span&gt;( GL_ARRAY_BUFFER, &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">NULL</span>&lt;/span&gt;, vbufSize );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="LC1229" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="LC1230" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="LC1231" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L133<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>133<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="LC1232" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC133<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glBufferSubData&lt;/span&gt;( GL_ARRAY_BUFFER, &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt;, vSize, points );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="LC1233" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="LC1234" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="LC1235" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L134<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>134<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="LC1236" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC134<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="LC1237" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="LC1238" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="LC1239" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="LC1240" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L135<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>135<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="LC1241" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC135<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; add in the color data (if there is any)&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="LC1242" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="LC1243" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="LC1244" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L136<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>136<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="LC1245" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC136<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-k<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-k">if</span>&lt;/span&gt;( cSize &amp;gt; &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">0</span>&lt;/span&gt; ) {&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="LC1246" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="LC1247" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="LC1248" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L137<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>137<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="LC1249" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC137<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;        &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;glBufferSubData&lt;/span&gt;( GL_ARRAY_BUFFER, vSize, cSize, colors );&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="LC1250" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="LC1251" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="LC1252" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L138<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>138<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="LC1253" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC138<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    }&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="LC1254" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="LC1255" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="LC1256" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L139<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>139<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="LC1257" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC139<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="LC1258" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="LC1259" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="LC1260" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="LC1261" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L140<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>140<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="LC1262" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC140<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; NOTE:  &amp;#39;points&amp;#39;, &amp;#39;colors&amp;#39;, and &amp;#39;elements&amp;#39; are dynamically allocated,&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="LC1263" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="LC1264" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="LC1265" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L141<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>141<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="LC1266" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC141<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; but we don&amp;#39;t free them here because they will be freed at the next&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="LC1267" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="LC1268" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="LC1269" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L142<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>142<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="LC1270" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC142<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; call to clear() or the get*() functions&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="LC1271" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="LC1272" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="LC1273" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L143<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>143<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="LC1274" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC143<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="LC1275" class="blob-code blob-code-inner js-file-line">&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="LC1276" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="LC1277" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="LC1278" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L144<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>144<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="LC1279" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC144<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;&lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c"><span class="pl-c">//</span>&lt;/span&gt; finally, mark it as set up&lt;/span&gt;&lt;/td&gt;</span></td>
      </tr>
      <tr>
        <td id="L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="LC1280" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="LC1281" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="LC1282" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L145<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>145<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="LC1283" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC145<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;    bufferInit = &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>pl-c1<span class="pl-pds">&quot;</span></span>&gt;<span class="pl-c1">true</span>&lt;/span&gt;;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="LC1284" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="LC1285" class="blob-code blob-code-inner js-file-line">      &lt;tr&gt;</td>
      </tr>
      <tr>
        <td id="L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="LC1286" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>L146<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-num js-line-number<span class="pl-pds">&quot;</span></span> data-line-number=<span class="pl-s"><span class="pl-pds">&quot;</span>146<span class="pl-pds">&quot;</span></span>&gt;&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="LC1287" class="blob-code blob-code-inner js-file-line">        &lt;td id=<span class="pl-s"><span class="pl-pds">&quot;</span>LC146<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>blob-code blob-code-inner js-file-line<span class="pl-pds">&quot;</span></span>&gt;}&lt;/td&gt;</td>
      </tr>
      <tr>
        <td id="L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="LC1288" class="blob-code blob-code-inner js-file-line">      &lt;/tr&gt;</td>
      </tr>
      <tr>
        <td id="L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="LC1289" class="blob-code blob-code-inner js-file-line">&lt;/table&gt;</td>
      </tr>
      <tr>
        <td id="L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="LC1290" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="LC1291" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="LC1292" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="LC1293" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="LC1294" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="LC1295" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="LC1296" class="blob-code blob-code-inner js-file-line">  &lt;button type=<span class="pl-s"><span class="pl-pds">&quot;</span>button<span class="pl-pds">&quot;</span></span> data-facebox=<span class="pl-s"><span class="pl-pds">&quot;</span>#jump-to-line<span class="pl-pds">&quot;</span></span> data-facebox-<span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>linejump<span class="pl-pds">&quot;</span></span> data-hotkey=<span class="pl-s"><span class="pl-pds">&quot;</span>l<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>d-none<span class="pl-pds">&quot;</span></span>&gt;Jump to Line&lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="LC1297" class="blob-code blob-code-inner js-file-line">  &lt;div id=<span class="pl-s"><span class="pl-pds">&quot;</span>jump-to-line<span class="pl-pds">&quot;</span></span> style=<span class="pl-s"><span class="pl-pds">&quot;</span>display:none<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="LC1298" class="blob-code blob-code-inner js-file-line">    &lt;!-- <span class="pl-s"><span class="pl-pds">&#39;</span>&quot;` --&gt;&lt;!-- &lt;/textarea&gt;&lt;/xmp&gt; --&gt;&lt;/option&gt;&lt;/form&gt;&lt;form accept-charset=&quot;UTF-8&quot; action=&quot;&quot; class=&quot;js-jump-to-line-form&quot; method=&quot;get&quot;&gt;&lt;div style=&quot;margin:0;padding:0;display:inline&quot;&gt;&lt;input name=&quot;utf8&quot; type=&quot;hidden&quot; value=&quot;&amp;#x2713;&quot; /&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="LC1299" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;input class=&quot;form-control linejump-input js-jump-to-line-field&quot; type=&quot;text&quot; placeholder=&quot;Jump to line&amp;hellip;&quot; aria-label=&quot;Jump to line&quot; autofocus&gt;</span></td>
      </tr>
      <tr>
        <td id="L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="LC1300" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;button type=&quot;submit&quot; class=&quot;btn&quot;&gt;Go&lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="LC1301" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/form&gt;  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="LC1302" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="LC1303" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="LC1304" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;modal-backdrop js-touch-events&quot;&gt;&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="LC1305" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="LC1306" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="LC1307" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="LC1308" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="LC1309" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="LC1310" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="LC1311" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="LC1312" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      </span></td>
      </tr>
      <tr>
        <td id="L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="LC1313" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;div class=&quot;container site-footer-container&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="LC1314" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div class=&quot;site-footer &quot; role=&quot;contentinfo&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="LC1315" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;ul class=&quot;site-footer-links float-right&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="LC1316" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://github.com/contact&quot; data-ga-click=&quot;Footer, go to contact, text:contact&quot;&gt;Contact GitHub&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="LC1317" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;li&gt;&lt;a href=&quot;https://developer.github.com&quot; data-ga-click=&quot;Footer, go to api, text:api&quot;&gt;API&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="LC1318" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;li&gt;&lt;a href=&quot;https://training.github.com&quot; data-ga-click=&quot;Footer, go to training, text:training&quot;&gt;Training&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="LC1319" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;li&gt;&lt;a href=&quot;https://shop.github.com&quot; data-ga-click=&quot;Footer, go to shop, text:shop&quot;&gt;Shop&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="LC1320" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://github.com/blog&quot; data-ga-click=&quot;Footer, go to blog, text:blog&quot;&gt;Blog&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="LC1321" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://github.com/about&quot; data-ga-click=&quot;Footer, go to about, text:about&quot;&gt;About&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="LC1322" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="LC1323" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/ul&gt;</span></td>
      </tr>
      <tr>
        <td id="L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="LC1324" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="LC1325" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;a href=&quot;https://github.com&quot; aria-label=&quot;Homepage&quot; class=&quot;site-footer-mark&quot; title=&quot;GitHub&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="LC1326" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-mark-github&quot; height=&quot;24&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;24&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="LC1327" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/a&gt;</span></td>
      </tr>
      <tr>
        <td id="L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="LC1328" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;ul class=&quot;site-footer-links&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="LC1329" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;li&gt;&amp;copy; 2017 &lt;span title=&quot;0.12998s from unicorn-1636155790-6g3kx&quot;&gt;GitHub&lt;/span&gt;, Inc.&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="LC1330" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://github.com/site/terms&quot; data-ga-click=&quot;Footer, go to terms, text:terms&quot;&gt;Terms&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="LC1331" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://github.com/site/privacy&quot; data-ga-click=&quot;Footer, go to privacy, text:privacy&quot;&gt;Privacy&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="LC1332" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://github.com/security&quot; data-ga-click=&quot;Footer, go to security, text:security&quot;&gt;Security&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="LC1333" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://status.github.com/&quot; data-ga-click=&quot;Footer, go to status, text:status&quot;&gt;Status&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="LC1334" class="blob-code blob-code-inner js-file-line"><span class="pl-s">        &lt;li&gt;&lt;a href=&quot;https://help.github.com&quot; data-ga-click=&quot;Footer, go to help, text:help&quot;&gt;Help&lt;/a&gt;&lt;/li&gt;</span></td>
      </tr>
      <tr>
        <td id="L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="LC1335" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/ul&gt;</span></td>
      </tr>
      <tr>
        <td id="L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="LC1336" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="LC1337" class="blob-code blob-code-inner js-file-line"><span class="pl-s">&lt;/div&gt;</span></td>
      </tr>
      <tr>
        <td id="L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="LC1338" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="LC1339" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="LC1340" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="LC1341" class="blob-code blob-code-inner js-file-line"><span class="pl-s">  &lt;div id=&quot;ajax-error-message&quot; class=&quot;ajax-error-message flash flash-error&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="LC1342" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-alert&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 16 16&quot; width=&quot;16&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="LC1343" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;button type=&quot;button&quot; class=&quot;flash-close js-flash-close js-ajax-error-dismiss&quot; aria-label=&quot;Dismiss error&quot;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="LC1344" class="blob-code blob-code-inner js-file-line"><span class="pl-s">      &lt;svg aria-hidden=&quot;true&quot; class=&quot;octicon octicon-x&quot; height=&quot;16&quot; version=&quot;1.1&quot; viewBox=&quot;0 0 12 16&quot; width=&quot;12&quot;&gt;&lt;path fill-rule=&quot;evenodd&quot; d=&quot;M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z&quot;/&gt;&lt;/svg&gt;</span></td>
      </tr>
      <tr>
        <td id="L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="LC1345" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    &lt;/button&gt;</span></td>
      </tr>
      <tr>
        <td id="L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="LC1346" class="blob-code blob-code-inner js-file-line"><span class="pl-s">    You can<span class="pl-pds">&#39;</span></span>t perform that action at <span class="pl-c1">this</span> time.</td>
      </tr>
      <tr>
        <td id="L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="LC1347" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="LC1348" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="LC1349" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="LC1350" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="LC1351" class="blob-code blob-code-inner js-file-line">    &lt;script crossorigin=<span class="pl-s"><span class="pl-pds">&quot;</span>anonymous<span class="pl-pds">&quot;</span></span> integrity=<span class="pl-s"><span class="pl-pds">&quot;</span>sha256-fPdr1olePk/h/HqF1Z0FJd3MBpR80+fq0oqtG4p+dE0=<span class="pl-pds">&quot;</span></span> src=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/assets/frameworks-7cf76bd6895e3e4fe1fc7a85d59d0525ddcc06947cd3e7ead28aad1b8a7e744d.js<span class="pl-pds">&quot;</span></span>&gt;&lt;/script&gt;</td>
      </tr>
      <tr>
        <td id="L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="LC1352" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="LC1353" class="blob-code blob-code-inner js-file-line">    &lt;script async=<span class="pl-s"><span class="pl-pds">&quot;</span>async<span class="pl-pds">&quot;</span></span> crossorigin=<span class="pl-s"><span class="pl-pds">&quot;</span>anonymous<span class="pl-pds">&quot;</span></span> integrity=<span class="pl-s"><span class="pl-pds">&quot;</span>sha256-I7wKtp6WXVNLqXGT/cmspqv9kbWimlgfYV6Huo8k4U8=<span class="pl-pds">&quot;</span></span> src=<span class="pl-s"><span class="pl-pds">&quot;</span>https://assets-cdn.github.com/assets/github-23bc0ab69e965d534ba97193fdc9aca6abfd91b5a29a581f615e87ba8f24e14f.js<span class="pl-pds">&quot;</span></span>&gt;&lt;/script&gt;</td>
      </tr>
      <tr>
        <td id="L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="LC1354" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="LC1355" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="LC1356" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="LC1357" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="LC1358" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="LC1359" class="blob-code blob-code-inner js-file-line">    &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-alert<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 16 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="LC1360" class="blob-code blob-code-inner js-file-line">    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>signed-in-tab-flash<span class="pl-pds">&quot;</span></span>&gt;You <span class="pl-k">signed</span> in with another tab <span class="pl-k">or</span> window. &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>&gt;Reload&lt;/a&gt; to refresh your session.&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="LC1361" class="blob-code blob-code-inner js-file-line">    &lt;span <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>signed-out-tab-flash<span class="pl-pds">&quot;</span></span>&gt;You <span class="pl-k">signed</span> out in another tab <span class="pl-k">or</span> window. &lt;a href=<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>&gt;Reload&lt;/a&gt; to refresh your session.&lt;/span&gt;</td>
      </tr>
      <tr>
        <td id="L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="LC1362" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="LC1363" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox<span class="pl-pds">&quot;</span></span> id=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox<span class="pl-pds">&quot;</span></span> style=<span class="pl-s"><span class="pl-pds">&quot;</span>display:none;<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="LC1364" class="blob-code blob-code-inner js-file-line">  &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-popup<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="LC1365" class="blob-code blob-code-inner js-file-line">    &lt;div <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-content<span class="pl-pds">&quot;</span></span> role=<span class="pl-s"><span class="pl-pds">&quot;</span>dialog<span class="pl-pds">&quot;</span></span> aria-labelledby=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-header<span class="pl-pds">&quot;</span></span> aria-describedby=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-description<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="LC1366" class="blob-code blob-code-inner js-file-line">    &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="LC1367" class="blob-code blob-code-inner js-file-line">    &lt;button type=<span class="pl-s"><span class="pl-pds">&quot;</span>button<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>facebox-close js-facebox-close<span class="pl-pds">&quot;</span></span> aria-label=<span class="pl-s"><span class="pl-pds">&quot;</span>Close modal<span class="pl-pds">&quot;</span></span>&gt;</td>
      </tr>
      <tr>
        <td id="L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="LC1368" class="blob-code blob-code-inner js-file-line">      &lt;svg aria-hidden=<span class="pl-s"><span class="pl-pds">&quot;</span>true<span class="pl-pds">&quot;</span></span> <span class="pl-k">class</span>=<span class="pl-s"><span class="pl-pds">&quot;</span>octicon octicon-x<span class="pl-pds">&quot;</span></span> height=<span class="pl-s"><span class="pl-pds">&quot;</span>16<span class="pl-pds">&quot;</span></span> version=<span class="pl-s"><span class="pl-pds">&quot;</span>1.1<span class="pl-pds">&quot;</span></span> viewBox=<span class="pl-s"><span class="pl-pds">&quot;</span>0 0 12 16<span class="pl-pds">&quot;</span></span> width=<span class="pl-s"><span class="pl-pds">&quot;</span>12<span class="pl-pds">&quot;</span></span>&gt;&lt;path fill-rule=<span class="pl-s"><span class="pl-pds">&quot;</span>evenodd<span class="pl-pds">&quot;</span></span> d=<span class="pl-s"><span class="pl-pds">&quot;</span>M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z<span class="pl-pds">&quot;</span></span>/&gt;&lt;/svg&gt;</td>
      </tr>
      <tr>
        <td id="L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="LC1369" class="blob-code blob-code-inner js-file-line">    &lt;/button&gt;</td>
      </tr>
      <tr>
        <td id="L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="LC1370" class="blob-code blob-code-inner js-file-line">  &lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="LC1371" class="blob-code blob-code-inner js-file-line">&lt;/div&gt;</td>
      </tr>
      <tr>
        <td id="L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="LC1372" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="LC1373" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="LC1374" class="blob-code blob-code-inner js-file-line">  &lt;/body&gt;</td>
      </tr>
      <tr>
        <td id="L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="LC1375" class="blob-code blob-code-inner js-file-line">&lt;/html&gt;</td>
      </tr>
      <tr>
        <td id="L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="LC1376" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
</table>

  <div class="BlobToolbar position-absolute js-file-line-actions dropdown js-menu-container js-select-menu d-none" aria-hidden="true">
    <button class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1 dropdown-toggle js-menu-target" id="js-file-line-action-button" type="button" aria-expanded="false" aria-haspopup="true" aria-label="Inline file action toolbar" aria-controls="inline-file-actions">
      <svg aria-hidden="true" class="octicon" height="16" version="1.1" viewBox="0 0 13 4" width="14">
        <g stroke="none" stroke-width="1" fill-rule="evenodd">
            <g transform="translate(-1.000000, -6.000000)">
                <path d="M2.5,9.5 C1.67157288,9.5 1,8.82842712 1,8 C1,7.17157288 1.67157288,6.5 2.5,6.5 C3.32842712,6.5 4,7.17157288 4,8 C4,8.82842712 3.32842712,9.5 2.5,9.5 Z M7.5,9.5 C6.67157288,9.5 6,8.82842712 6,8 C6,7.17157288 6.67157288,6.5 7.5,6.5 C8.32842712,6.5 9,7.17157288 9,8 C9,8.82842712 8.32842712,9.5 7.5,9.5 Z M12.5,9.5 C11.6715729,9.5 11,8.82842712 11,8 C11,7.17157288 11.6715729,6.5 12.5,6.5 C13.3284271,6.5 14,7.17157288 14,8 C14,8.82842712 13.3284271,9.5 12.5,9.5 Z"></path>
            </g>
        </g>
      </svg>
    </button>
    <div class="dropdown-menu-content js-menu-content" id="inline-file-actions">
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2">
        <li><a class="js-zeroclipboard dropdown-item" style="cursor:pointer;" id="js-copy-lines" data-original-text="Copy lines">Copy lines</a></li>
        <li><a class="js-zeroclipboard dropdown-item" id= "js-copy-permalink" style="cursor:pointer;" data-original-text="Copy permalink">Copy permalink</a></li>
          <li><a href="/harrisonthu/ComputerGraphic-csci-510-/issues/new" class="dropdown-item" id="js-new-issue">Open new issue</a></li>
      </ul>
    </div>
  </div>

  </div>

  </div>

  <button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
  <div id="jump-to-line" style="display:none">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
      <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
      <button type="submit" class="btn">Go</button>
</form>  </div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>

    </div>
  </div>

  </div>

      
<div class="footer container-lg px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between py-6 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">&copy; 2017 <span title="0.19418s from unicorn-3045553848-vlrsp">GitHub</span>, Inc.</li>
        <li class="mr-3"><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li class="mr-3"><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li class="mr-3"><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li class="mr-3"><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>

    <a href="https://github.com" aria-label="Homepage" class="footer-octicon" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li class="mr-3"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li class="mr-3"><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li class="mr-3"><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha256-sMDE+ePeIFFavTPACqzXaZCOIlhx+nA65PKrqwpnU8U=" src="https://assets-cdn.github.com/assets/frameworks-b0c0c4f9e3de20515abd33c00aacd769908e225871fa703ae4f2abab0a6753c5.js"></script>
    
    <script async="async" crossorigin="anonymous" integrity="sha256-6yIgOA1tli+AnNUc86e5HvVhrEa1k+uttS1RyjAVsXY=" src="https://assets-cdn.github.com/assets/github-eb2220380d6d962f809cd51cf3a7b91ef561ac46b593ebadb52d51ca3015b176.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>


  </body>
</html>

