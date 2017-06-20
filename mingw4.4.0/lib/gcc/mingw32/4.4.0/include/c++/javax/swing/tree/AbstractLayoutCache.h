
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_AbstractLayoutCache__
#define __javax_swing_tree_AbstractLayoutCache__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class TreeModelEvent;
      }
      namespace tree
      {
          class AbstractLayoutCache;
          class AbstractLayoutCache$NodeDimensions;
          class TreeModel;
          class TreePath;
          class TreeSelectionModel;
      }
    }
  }
}

class javax::swing::tree::AbstractLayoutCache : public ::java::lang::Object
{

public:
  AbstractLayoutCache();
  virtual void setNodeDimensions(::javax::swing::tree::AbstractLayoutCache$NodeDimensions *);
  virtual ::javax::swing::tree::AbstractLayoutCache$NodeDimensions * getNodeDimensions();
public: // actually protected
  virtual ::java::awt::Rectangle * getNodeDimensions(::java::lang::Object *, jint, jint, jboolean, ::java::awt::Rectangle *);
public:
  virtual void setModel(::javax::swing::tree::TreeModel *);
  virtual ::javax::swing::tree::TreeModel * getModel();
  virtual void setRootVisible(jboolean);
  virtual jboolean isRootVisible();
  virtual void setRowHeight(jint);
  virtual jint getRowHeight();
  virtual void setSelectionModel(::javax::swing::tree::TreeSelectionModel *);
  virtual ::javax::swing::tree::TreeSelectionModel * getSelectionModel();
  virtual jint getPreferredHeight();
  virtual jint getPreferredWidth(::java::awt::Rectangle *);
  virtual jboolean isExpanded(::javax::swing::tree::TreePath *) = 0;
  virtual ::java::awt::Rectangle * getBounds(::javax::swing::tree::TreePath *, ::java::awt::Rectangle *) = 0;
  virtual ::javax::swing::tree::TreePath * getPathForRow(jint) = 0;
  virtual jint getRowForPath(::javax::swing::tree::TreePath *) = 0;
  virtual ::javax::swing::tree::TreePath * getPathClosestTo(jint, jint) = 0;
  virtual ::java::util::Enumeration * getVisiblePathsFrom(::javax::swing::tree::TreePath *) = 0;
  virtual jint getVisibleChildCount(::javax::swing::tree::TreePath *) = 0;
  virtual void setExpandedState(::javax::swing::tree::TreePath *, jboolean) = 0;
  virtual jboolean getExpandedState(::javax::swing::tree::TreePath *) = 0;
  virtual jint getRowCount() = 0;
  virtual void invalidateSizes() = 0;
  virtual void invalidatePathBounds(::javax::swing::tree::TreePath *) = 0;
  virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent *) = 0;
  virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent *) = 0;
  virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent *) = 0;
  virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent *) = 0;
  virtual JArray< jint > * getRowsForPaths(JArray< ::javax::swing::tree::TreePath * > *);
public: // actually protected
  virtual jboolean isFixedRowHeight();
  ::javax::swing::tree::AbstractLayoutCache$NodeDimensions * __attribute__((aligned(__alignof__( ::java::lang::Object)))) nodeDimensions;
  ::javax::swing::tree::TreeModel * treeModel;
  ::javax::swing::tree::TreeSelectionModel * treeSelectionModel;
  jboolean rootVisible;
  jint rowHeight;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_tree_AbstractLayoutCache__